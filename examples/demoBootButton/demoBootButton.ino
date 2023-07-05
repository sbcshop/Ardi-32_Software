const int buzzerPin = 40; // buzzer at GPIO40
const int bootButton = 0; // button 1 at GPIO4

void beep(int note, int duration){  // need note frequency and time duration (in millis)
  tone(buzzerPin, note, duration);
  delay(duration);
}

void setup(void) {
  Serial.begin(115200);
  pinMode(bootButton, INPUT_PULLUP); // set boot Button pin to INPUT PULLUP
  pinMode(buzzerPin, OUTPUT); // set Buzzer pin as OUTPUT
  delay(1000);
}

void loop() {
  if (digitalRead(bootButton)==0){
    Serial.println("Boot Button Pressed!");
    beep(1245,500);
    delay(50);
  }
  delay(10);
}
