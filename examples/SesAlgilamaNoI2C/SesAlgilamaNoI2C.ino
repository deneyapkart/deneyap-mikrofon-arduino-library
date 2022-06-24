/*
 *   I2C haberleşme protokolü kullanılmadan Ses Algılama örneği,
 *
 *   Sensörden gelen ses değerleri seri monitöre yazdırmaktadır. Ses seviyesi belirlenen threshold değerini aşınca
 *   LEDB pinine bağlı led yanmaktadır. Ses değişimi SERİ PORT ekranında grafiksek olarak izlenmelidir.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Mikrofon için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-mikrofon-arduino-library <------
 *
*/
#define AOUTPIN A0                                    // Mikrofon kartındaki AOUT pininin A0 pinine baglanmalıdır
#define threshold 5555                                // Verilen eşik değeri ortamın ses durumuna göre istenilen değer ile değiştirilmeli.

void setup() {
    Serial.begin(115200);
    pinMode(LEDB, OUTPUT);
}

void loop() {
    uint16_t SesDeger = analogRead(AOUTPIN);          // Ses degerinin okunması
    Serial.print("Ses Değeri: ");
    Serial.println(SesDeger);                         // Ses degerini seri monitore yazdırılması
    
    if (SesDeger > threshold) {                       // Ses değeri belirlenen değeri aşarsa
        Serial.println("####Ses Algılandı####");      // Seri monitöre yazdırılması
        digitalWrite(LEDB, HIGH);                     // LEDB ledinin yanması
    }
    else {
        digitalWrite(LEDB, LOW);
    } 
    delay(10);
}
