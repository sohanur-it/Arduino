
int ledpin= 13;
int potpin =A2;
int value=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(ledpin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

 
    value=analogRead(potpin);
    Serial.print(value);
    analogWrite(ledpin, value);
    Serial.println("led is fading via potentiometer ..");
  

}
