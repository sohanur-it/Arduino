
int counter=0;
int ledpin1=13;
int ledpin2=12;
int ledpin3=11;
int ledpin4=10;
int del=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(ledpin1, HIGH);
  delay(del);
  digitalWrite(ledpin1, LOW);
  
  digitalWrite(ledpin2, HIGH);
  delay(del);
  digitalWrite(ledpin2, LOW);

  digitalWrite(ledpin3, HIGH);
  delay(del);
  digitalWrite(ledpin3, LOW);

  digitalWrite(ledpin4, HIGH);
  delay(del);
  digitalWrite(ledpin4, LOW);

  
  digitalWrite(ledpin3, HIGH);
  delay(del);
  digitalWrite(ledpin3, LOW);

  digitalWrite(ledpin2, HIGH);
  delay(del);
  digitalWrite(ledpin2, LOW);

  }
