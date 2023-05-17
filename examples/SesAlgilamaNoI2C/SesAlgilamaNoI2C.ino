/*
 *   I2C haberleşme protokolü kullanılmadan Ses Algılama örneği,
 *
 *   Sensörden gelen ses değerleri seri monitöre yazdırmaktadır. Ses seviyesi belirlenen threshold değerini aşınca
 *   LED_BUILTIN pinine bağlı led yanmaktadır. Ses değişimi SERİ PORT ekranında grafiksek olarak izlenmelidir.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Mikrofon için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-modul-deneyap-mikrofon-m15 <------
 *      ------> https://github.com/deneyapkart/deneyap-mikrofon-arduino-library <------
 *
*/
#define AOUTPIN A0                                    // Mikrofon kartındaki AOUT pininin A0 pinine baglanmalıdır
#define threshold 5555                                // Verilen eşik değeri ortamın ses durumuna göre istenilen değer ile değiştirilmeli.

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    uint16_t SesDeger = analogRead(AOUTPIN);          // Ses degerinin okunması
    Serial.print("Ses Değeri: ");
    Serial.println(SesDeger);                         // Ses degerini seri monitore yazdırılması
    
    if (SesDeger > threshold) {                       // Ses değeri belirlenen değeri aşarsa
        Serial.println("####Ses Algılandı####");      // Seri monitöre yazdırılması
        digitalWrite(LED_BUILTIN, HIGH);              // LED_BUILTIN ledinin yanması
    }
    else {
        digitalWrite(LED_BUILTIN, LOW);
    } 
    delay(10);
}
