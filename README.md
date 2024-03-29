# Ardi-32_Software
<img src="https://cdn.shopify.com/s/files/1/1217/2104/files/ARDI32banner.jpg?v=1688463937">
Ardi-32 is the ultimate Arduino Uno alternative packed with powerful specs and exciting features in the Arduino Uno form factor. Ardi-32 is powered by the latest ESP32-S3-WROOM-1. Built-in Wi-Fi and Bluetooth connectivity for Ardi-32 boards make them ideal for IoT projects or projects requiring wireless communication. 
This github provides getting started guide and other working details for Ardi-32

Ardi-32 Compatible Shields are [Relay](https://shop.sb-components.co.uk/products/ardi-relay-shield-for-arduino-uno?_pos=4&_sid=961a5887c&_ss=r), [RFID](https://shop.sb-components.co.uk/products/ardi-rfid-shield-for-arduino-uno?_pos=5&_sid=b4e4b2ef1&_ss=r), [Display](https://shop.sb-components.co.uk/products/ardi-display-shield-for-arduino-uno?_pos=5&_sid=961a5887c&_ss=r) and [UHF](https://shop.sb-components.co.uk/products/ardi-uhf-shield-for-arduino-uno?variant=40791294836819) which you can use to add more functionality into projects. 

### Features:
- Powered by powerful ESP32-S3-WROOM-1 module with inbuild WiFi and BLE support.
- Arduino UNO Form factor, so you can connect 3.3V compatible Arduino shields
- SD card slot for storage and data transfer
- The facility of Type C USB interface for programming and to power the board
- Boot and Reset buttons are available to operate in various modes.
- Multifunction GPIO breakout supporting general I/O, UART, I2C, SPI, ADC & PWM functions.
- Multi-tune Buzzer to add audio alert into the project
- Multi-platform support like Arduino IDE, Espressif IDF, and MicroPython/CircuitPython
- Comes with HID support, so the device can simulate a mouse or keyboard

### Specifications:
- ESP32-S3 series of SoCs having Xtensa® dual-core 32-bit LX7 microprocessor
- 4 GHz Wi-Fi (802.11 b/g/n) and Bluetooth® 5 (LE)
- Flash up to 16 MB, PSRAM up to 8 MB
- Board Supply 5V and GPIO pins operating voltage 3.3V
- 22 Multipurpose GPIOs breakout in Arduino style for easy peripheral and shield interfacing
- I2C, SPI, and UART communications protocol support
- Cross-platform development and multiple programming language support

## Getting Started with Ardi-32
### Hardware Overview
#### Pinout
<img src="https://cdn.shopify.com/s/files/1/1217/2104/files/ardi32pinout.jpg?v=1688464181">

- (1) Buzzer
- (2) Type C
- (3) Reset Button
- (4) Native USB Interface breakout
- (5) & (9) Multipurpose GPIO breakout
- (6) ESP32-S3-WROOM-1 chip module
- (7) Boot Button
- (8) SD card slot
- (10) & (11) Power Pins

#### Interfacing Details
  | ESP32 | Hardware Pin | Function |
  |---|---|---|
  | IO42 | SCLK | Clock pin of SPI interface for microSD card |
  | IO2 | DIN  | MOSI (Master OUT Slave IN) data pin of SPI interface for microSD card|
  | IO41 | DOUT | MISO (Master IN Slave OUT) data pin of SPI interface for microSD card|
  | IO1 | CS   | Chip Select pin of SPI interface for microSD card|
  | IO40 | Buzzer| Onboard Buzzer PWM pin connection|
  | IO8 | LED | Onboard Led Positive Pin |
  | IO0 | Button | Onboard Boot button |

Note: When SD card not connected, then above related pins can be used for normal GPIO operations.

### 1. Configure and Setup Development Environment
   - Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
   - Once installation done will add ESP32 S3 board support into IDE, for this first you need to add below link into preference:
     ``` https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json ```
     
     Select File > Preference, and add link as show in below image,
      <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/preference_board.gif" />
      
   - Now will install ESP32 based boards as shown in below image,

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/install_ESP32boards.gif" />
     
   - Once done, keeping default settings select the ESP32S3 Dev Module with suitable com port (may be different in your case) as shown below,

     <img src="https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/select_esp32_with_comport.gif">
   
  #### CP2102 Driver installation  
   - In case you don't see com port then you will have to install CP2102 driver from [Link](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads). Download and install as per your operating system.
     * check below one recommended for windows user
       
       <img src="https://github.com/sbcshop/Ardi-32_Software/blob/main/images/cp2102_driver_link.png" width="626" height="377">
       
     * Once successfully installed then it appears as shown in below image
       
       <img src="https://github.com/sbcshop/Ardi-32_Software/blob/main/images/device_manager_view.png" width="488" height="353">

     
### 2. Testing First Code
   - At this step you are all set to test codes, for easy getting started we have provided various demo [example codes](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples) in github which you can download and try. 
   - Open one example code in Arduino and make sure you have selected correct board with suitable com port, click on upload button to transfer code on Ardi-32.
     <img src="https://github.com/sbcshop/ArdiFi_Software/blob/main/images/uploadCode.gif">
    
   - Checkout other examples below and build your own custom program codes using those references.

### 3. Installing Libraries
   - Download [library zip file](https://github.com/sbcshop/Ardi-32_Software/blob/main/libraries.zip) provided here in github.
   - Extract and copy files inside Document > Arduino > Libraries folder. Make sure to restart Arduino IDE whenever you update or add any libraries.

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/library_files_path.png" />
     
### Example Codes
   
   In [example](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples) folder you will find demo examples to try out on ArdiFi
   - [Buzzer](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples/buzzerDemo) : code to test onboard Buzzer
   - [SD card](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples/sdcard_Demo) : code to test onboard micro SD card interfacing
   
   Also, sample codes are available for Ardi32 shields
   - [Ardi Relay shield Code](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples/Ardi32_relay_shield_interfacing) : code test switching of relays in sequence, for more details refer [Ardi-Relay Shield](https://github.com/sbcshop/Ardi_RFID_Shield_Software) 
   - [Ardi RFID shield Code](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples/Ardi32_RFID_shield_interfacing) : code to test RFID module scan and switching of Relay, for more details refer [Ardi-RFID Shield](https://github.com/sbcshop/Ardi_RFID_Shield_Software) 
   - [Ardi Display shield Code](https://github.com/sbcshop/Ardi-32_Software/tree/main/examples/Ardi32_Display_shield_interfacing) : testing of display and programmable buttons, for this example to try you need to install [libraries](https://github.com/sbcshop/Ardi-32_Software/blob/main/libraries.zip) provided in github. [Step 3](https://github.com/sbcshop/Ardi-32_Software/blob/main/README.md#3-installing-libraries) shows how to install libraries. For more details refer [Ardi-Display Shield](https://github.com/sbcshop/Ardi_Display_Shield_Software) 
   - [Ardi UHF shield Code](https://github.com/sbcshop/Ardi-32_Software/tree/main/examples/Ardi32_UHF_shield_interfacing) : testing onboard UHF module, for more details refer [Ardi-UHF Shield](https://github.com/sbcshop/Ardi_UHF_Shield_Software) 
   
   Using this sample code as a guide, you can modify, build, and share codes!!  
   
## Resources
  * [Schematic](https://github.com/sbcshop/ArdiFi_Hardware/blob/main/Design%20Data/SCH%20%20Ardi-32.pdf)
  * [Hardware Files](https://github.com/sbcshop/ArdiFi_Hardware)
  * [Step File](https://github.com/sbcshop/ArdiFi_Hardware/blob/main/Mechanical%20Data/STEP%20Ardi-32.step)
  * [Getting Started with ESP32 in Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [ESP32 S3 Hardware Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/index.html)
  * [ESP32 S3 Datasheet](https://github.com/sbcshop/3.2_Touchsy_ESP-32_Capacitive_Software/blob/main/documents/esp32-s3_datasheet_en.pdf)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)


## Related Products
   * [ArdiPi](https://shop.sb-components.co.uk/products/ardipi-uno-r3-alternative-board-based-on-pico-w?_pos=5&_sid=5704675c2&_ss=r) - Arduino Uno Form factor with powerful Pico W of Raspberry Pi having onboard WiFi and BLE support.
   * [Ardi Relay Shield](https://shop.sb-components.co.uk/products/ardi-relay-shield-for-arduino-uno?_pos=4&_sid=961a5887c&_ss=r) - Relay Shield with Screw terminal and Relay ON/OFF Status LED
   * [Ardi Display Shield](https://shop.sb-components.co.uk/products/ardi-display-shield-for-arduino-uno?_pos=5&_sid=961a5887c&_ss=r) - 2.0" Display Shield with onboard Programmable Buttons and Joystick
   * [Ardi UHF Shield](https://shop.sb-components.co.uk/products/ardi-uhf-shield-for-arduino-uno?variant=40791294836819) - UHF based shield with Oled display and Buzzer onboard
   * [Ardi RFID Shield](https://shop.sb-components.co.uk/products/ardi-rfid-shield-for-arduino-uno?_pos=5&_sid=b4e4b2ef1&_ss=r) - Ardi RFID Shield with onbard Relay and Status LED
   
   Shields are compatible with ArdiPi, Ardi-32 and Other Arduino Uno Compatible boards.

## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
