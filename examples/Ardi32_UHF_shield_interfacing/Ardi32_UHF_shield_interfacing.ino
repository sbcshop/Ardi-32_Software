#include <HardwareSerial.h>
#include "Uhf.h"

#define mySerial Serial2

//Uncomment corresponding commands to configure UHF, more command can be added in UHF.h
#define commands HARDWARE_VERSION
//#define commands MULTIPLE_READ
//#define commands SINGLE_READ
//#define commands STOP_READ

void setup() {
  pinMode(21,OUTPUT);
  digitalWrite(21,LOW); // LOW - to enable the module and HIGH to disable the module
  
  mySerial.begin(115200, SERIAL_8N1, 18, 17);
  Serial.begin(115200);
  mySerial.setTimeout(2000);
}

void loop() {
  mySerial.write(commands, sizeof(commands)); // send command to UHF module for configuration
  delay(100);
  int len = mySerial.available();
  if (len > 0) {
    mySerial.readBytes(container, len); // Read Response from UHF module, and parse frame received
    frameParse(container, len); // This process done in Uhf.cpp file
  }
  delay(500);
}
