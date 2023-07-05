// define IO pins on which relay connected
int relay1 = 41;
int relay2 = 2;
int relay3 = 9;
int relay4 = 14;

void setup() {
  //set relay pins as OUTPUT
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relay1, HIGH);  // Turn on Relay1
  delay(500);                  // wait 
  digitalWrite(relay2, HIGH);  
   delay(500);
  digitalWrite(relay3, HIGH); 
   delay(500);
  digitalWrite(relay4, HIGH);  
  delay(500);                      
  digitalWrite(relay4, LOW);  // Turn off Relay1
   delay(500);
  digitalWrite(relay3, LOW);  
   delay(500);
  digitalWrite(relay2, LOW);  
   delay(500);
  digitalWrite(relay1, LOW);  
  delay(2000);
  
}
