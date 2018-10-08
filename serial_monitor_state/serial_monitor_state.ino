

int buttonpin = 2 ;
int buttonstate= 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate= digitalRead(buttonpin);

  Serial.print(buttonstate);
  delay(400);
  

}
