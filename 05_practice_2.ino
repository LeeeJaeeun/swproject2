const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  delay(1000);

  for (int j = 0; j < 5; j++) {
    digitalWrite(ledPin, HIGH); 
    delay(100); 
    digitalWrite(ledPin, LOW); 
    delay(100); 
  }

  digitalWrite(ledPin, HIGH);
  
  while (1) {
  }
}
