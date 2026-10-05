int SWA = 2;
int SWB = 5;
int LED = 13;

void setup() {
  pinMode(SWA, INPUT);
  pinMode(SWB, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int inputA = digitalRead(SWA);
  int inputB = digitalRead(SWB);

  if (inputA == HIGH && inputB == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}