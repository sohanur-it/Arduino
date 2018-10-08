
int ledpin= 13;
int buttonpin = 2 ;
int buttonstate= 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate= digitalRead(buttonpin);

  //Serial.print(buttonstate);
  //delay(400);
  if(buttonstate==HIGH)
    {
    digitalWrite(ledpin, HIGH);
    Serial.println("led is on ..");
    
    }

    else{
      digitalWrite(ledpin, LOW);
      Serial.println("led is off ..");
      
      }

      //delay(400);
  

}
