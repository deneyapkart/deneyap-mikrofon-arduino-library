# Deneyap Microphone ICS-40619 Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Microphone ICS-40619

## :mag_right:Specifications 
- `Product ID` **M15**, **mpv1.0**
- `MCU` ICS-40619, STM8S003F3
- `Weight` 
- `Module Dimension`
- `I2C address` 0x35, 0x36, 0x37, 0x38

| Address |  | 
| :---      | :---     |
| 0x35 | default address |
| 0x36 | address when ADR1 pad is shorted |
| 0x37 | address when ADR2 pad is shorted |
| 0x38 | address when ADR1 and ADR2 pads are shorted |

## :closed_book:Documentation 
Deneyap Microphone ICS-40619

[ICS-40619](https://invensense.tdk.com/wp-content/uploads/2016/02/ICS-40619-Datasheet.pdf?ref_disty=digikey)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Microphone ICS-40619
This Arduino library allows you to use Deneyap Microphone ICS-40619 with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap Microphone and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|Microphone| Function | Board pins | 
|:--- |   :---  | :---|
|3.3V | Power   |3.3V |      
|GND  | Ground  | GND | 
|SDA  | I2C Data  | SDA pin |
|SCL  | I2C Clock | SCL pin |
|SWIM | Debug | no connection |
|RES  | Debug | no connection |
|AOUT | Output |any Analog pin| 
| MO- |Microphone Analog Output -||
| MO+ |Microphone Analog Output +||
| NC  | no connection|         |

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-mikrofon-arduino-library/blob/master/LICENSE) file for license information.