# Deneyap Mikrofon ICS-40619 Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Mikrofon ICS-40619 için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M15**, **mpv1.0**
- `MCU` ICS-40619, STM8S003F3
- `Ağırlık`
- `Modul Boyutları`
- `I2C Adres` 0x35, 0x36, 0x37, 0x38

| Adres |  | 
| :---  | :---     |
| 0x35 | varsayılan adres |
| 0x36 | ADR1 kısa devre yapıldığındaki adres |
| 0x37 | ADR2 kısa devre yapıldığındaki adres |
| 0x38 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
Deneyap Mikrofon ICS-40619

[ICS-40619](https://invensense.tdk.com/wp-content/uploads/2016/02/ICS-40619-Datasheet.pdf?ref_disty=digikey)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Mikrofon ICS-40619
Bu Arduino kütüphanesi Deneyap Mikrofon ICS-40619 I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Mikrofon ile Kart I2C kablosu ile bağlanacak
- veya jumper kablolar ile ile 3V3, GND, SDA ve SCL bağlantıları yapılacak 

|Mikrofon| Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
|SWIM | Debug | bağlantı yok |
|RES  | Debug | bağlantı yok |
|AOUT | Output |herhangi bir Analog pini| 
| MO- |Mikrofon Analog Output -||
| MO+ |Mikrofon Analog Output +||
| NC          | bağlantı yok |   |

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-mikrofon-arduino-library/blob/master/LICENSE) dosyasını inceleyin.