
int buzzerpin=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzerpin, HIGH);
  delay(100);
  tone(buzzerpin, LOW);
  delay(100);

}
