/*
 *   Ses Algılama örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen ses değerleri seri monitöre yazdırmaktadır. Ses seviyesi belirlenen threshold değerini aşınca
 *   LEDB pinine bağlı led yanmaktadır. Ses değişimi SERİ PORT ekranında grafiksek olarak izlenmelidir.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *
 *   Bu örnek Deneyap Mikrofon için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-mikrofon-arduino-library <------
 *
*/
#include <Deneyap_Mikrofon.h>                           // Deneyap_Mikrofon.h kutuphanesi eklenmesi

Microphone Mikrofon;                                    // Microphone için class tanımlaması
#define threshold 525                                   // Verilen eşik değeri ortamın ses durumuna göre istenilen değer ile değiştirilmeli.

void setup() {
    Serial.begin(115200);
    if (!Mikrofon.begin(0x35)) {                         // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız ");     // I2C bağlantısı başarısız olursa seri monitore yazdırılması
        while (1);
    }
    pinMode(LEDB, OUTPUT);
}

void loop() {
    uint16_t SesDeger = Mikrofon.ReadMicrophoneAnalog();  // Ses degerinin okunması
    Serial.print("Ses Degeri: ");
    Serial.println(SesDeger);                             // Ses verisi seri monitore yazildi

    if (SesDeger > threshold) {
        Serial.println("####Ses Algılandı####");
        digitalWrite(LEDB, HIGH);
    }
    else {
        digitalWrite(LEDB, LOW);
    }
    delay(10);
}
