int KirmiziLed = 3;
int SariLed = 8;
int YesilLed = 11;


void setup() {
  pinMode(KirmiziLed, OUTPUT);
  pinMode(SariLed, OUTPUT);
  pinMode(YesilLed, OUTPUT);
}
void loop() {
  digitalWrite(KirmiziLed, HIGH);
  delay(5000);
  digitalWrite(KirmiziLed, LOW);
  digitalWrite(SariLed, HIGH);
  delay(1000);
  digitalWrite(SariLed, LOW);
  digitalWrite(YesilLed, HIGH);
  delay(2000);
  digitalWrite(YesilLed, LOW);
}
