const int buzzerPin = 40; // buzzer at GPIO40

void beep(int note, int duration){  // need note frequency and time duration (in millis)
  tone(buzzerPin, note, duration);
  delay(duration);
}

void setup(void) {
  pinMode(buzzerPin, OUTPUT); // set Buzzer pin as OUTPUT
  beep(1248,500);
}

void loop() {
  beep(1248,500); // PWM based buzzer control
  beep(454,500);
  delay(2000);
  digitalWrite(buzzerPin, HIGH); // Buzzer Turn ON
  delay(500);
  digitalWrite(buzzerPin, LOW); // Buzzer Turn OFF
  delay(2000);
}
