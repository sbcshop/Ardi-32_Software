# ArdiFi_Software
<img src="https://cdn.shopify.com/s/files/1/1217/2104/files/ARDIPI_bannerRev.jpg?v=1688463003">
Introducing ArdiPi the ultimate Arduino Uno alternative packed with powerful specs and exciting features in Arduino Uno form factor. You can enjoy a low-cost solution with access to the largest support communities for Raspberry Pi. 
This github provides getting started guide and other working details for ArdiPi.

ArdiPi Compatible Shields are [Relay](https://shop.sb-components.co.uk/products/ardi-relay-shield-for-arduino-uno?_pos=4&_sid=961a5887c&_ss=r), [RFID](https://shop.sb-components.co.uk/products/ardi-rfid-shield-for-arduino-uno?_pos=5&_sid=b4e4b2ef1&_ss=r), [Display](https://shop.sb-components.co.uk/products/ardi-display-shield-for-arduino-uno?_pos=5&_sid=961a5887c&_ss=r) and [UHF](https://shop.sb-components.co.uk/products/ardi-uhf-shield-for-arduino-uno?variant=40791294836819) which you can use to add more functionality into projects. 

### Features:
- Arduino UNO Form factor, so you can connect 3.3V compatible Arduino shields  
- SD card slot for storage and data transfer
- Drag-and-drop programming using mass storage over USB
- Multifunction GPIO breakout supporting general I/O, UART, I2C, SPI, ADC & PWM function.
- Multi-tune Buzzer to add audio alert into project
- SWD pins breakout for serial debugging 
- Multi-platform support like Arduino IDE, MicroPython and CircuitPython.
- Comes with HID support, so device can simulate a mouse or keyboard

### Specifications:
- Powered by RP2040 microcontroller which is dual-core Arm Cortex-M0+ processor, 2MB of onboard flash storage, 264kB of RAM
- On-board single-band 2.4GHz wireless interfaces (802.11n) for WiFi and Bluetooth® 5 (LE)
- WPA3 & Soft access point supporting up to four clients
- Operating voltage of pins 3.3V and board supply 5V
- 25 Multipurpose GPIOs breakout in Arduino style for easy peripheral interfacing
- I2C, SPI, and UART communications protocol support
- 2MB of onboard Flash memory
- Cross platform development and multiple programming language support

## Getting Started with ArdiPi
### Hardware Overview
#### Pinout
<img src="https://github.com/sbcshop/ArdiPi_Software/blob/main/images/ArdiPi_pinout.jpg">

- (1) Buzzer 
- (2) RPi Pico W
- (3) Reset Button
- (4) & (8) Multipurpose GPIO breakout 
- (5) Power LED
- (6) SWD & GPIO breakout
- (7) SD card slot
- (9) & (10) Power Pins

#### GPIO Pins Detail
<img src="https://github.com/sbcshop/ArdiPi_Software/blob/main/images/ArdiPI_GPIO_PinDetail.jpg">



### Example Codes
   Save whatever example code file you want to try as main.py in pico w as shown in above [step 3](https://github.com/sbcshop/ArdiPi_Software/tree/main#3-how-to-move-your-script-on-pico-w-of-ardipi), also add related lib files with default name.
   In [example](https://github.com/sbcshop/ArdiFi_Software/tree/main/examples) folder you will find demo example script code to test onboard components of ArdiPi like 
   - [Buzzer](https://github.com/sbcshop/ArdiFi_Software/blob/main/examples/BuzzerDemo.py), 
   - [SD card](https://github.com/sbcshop/ArdiFi_Software/blob/main/examples/sdcardDemo.py),
   
   Also, sample codes are available for ArdiPi shields
   - [Relay](https://github.com/sbcshop/ArdiFi_Software/blob/main/examples/relay_shield_demo.py) : code test switching of relays in sequence 
   - [RFID](https://github.com/sbcshop/ArdiFi_Software/blob/main/examples/RFID_shield_demo.py) : code to test RFID module scan and switching of Relay
   - [Display](https://github.com/sbcshop/ArdiFi_Software/blob/main/examples/display_shield_Demo.py) : testing of display and programmable buttons
   - [UHF]() : testing onboard UHF module , buzzer and display unit of shield 
   
   Using this sample code as a guide, you can modify, build, and share codes!!  
   
## Resources
  * [Schematic]()
  * [Hardware Files]()
  * [Step File]()



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
