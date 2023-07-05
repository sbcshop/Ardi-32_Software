const int LED = 8; // LED connected at GPIO8

void setup(void) {
  pinMode(LED, OUTPUT); // set LED pin as OUTPUT

}

void loop() {
  digitalWrite(LED, HIGH); // Switch ON LED
  delay(1000);  
  digitalWrite(LED, LOW); // Switch OFF LED
  delay(1000);
}
