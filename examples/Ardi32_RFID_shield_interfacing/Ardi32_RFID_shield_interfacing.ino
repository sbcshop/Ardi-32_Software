/*
 * For ESP32 we can Mount RFID shield while coding, since it is using different serial pin to communicate with RFID module
 */

#include <HardwareSerial.h>

#define rfidSerial Serial2  // Serial for RFID interfacing with ESP32

char input[12];    // variable to hold RFID card value     
int count = 0;        
int buzzerPin = 42;  // Buzzer connected at Digital Pin 3 of Arduino Uno
int relayPin = 1;   // Relay connected at Digital Pin 3 of Arduino Uno
bool statusVal = 0;    // to check previous state


void setup()
{
  Serial.begin(115200);   // START SERIAL AT BAUD RATE OF 9600 BITS/SEC
  //rfidSerial.begin(9600);  
  rfidSerial.begin(9600, SERIAL_8N1, 18, 17); 
  pinMode(buzzerPin, OUTPUT); // set Buzzer pin as OUTPUT
  pinMode(relayPin, OUTPUT);  // set Relay pin as OUTPUT
  
}

void loop()
{      
  if(rfidSerial.available())   // Check availability of SERIAL DATA from RFID , 
  {
    count = 0;  // Reset the counter to zero
    /* Keep reading Byte by Byte from the Buffer till the RFID Reader Buffer is empty 
       or till 12 Bytes (the ID size of our Tag) is read */
    statusVal = !statusVal;
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    while(rfidSerial.available() && count < 12) 
    {
      input[count] = rfidSerial.read(); // Read 1 Byte of data and store it in the input[] variable
      count++;          // increment counter
      delay(5);
    }
    
     // PRINTING RFID TAG           
    for(int i=0;i<12;i++)
      Serial.print(input[i]); // prints tag Value on Serial monitor
    Serial.println();
    digitalWrite(buzzerPin, LOW); // Turn OFF buzzer
    digitalWrite(relayPin, statusVal); // Toggle relay for each scan of RFID 
   }

}
