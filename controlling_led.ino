
char data = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()> 0 )
  {
   data = Serial.read();
   if(data=='1')
   {
    digitalWrite(13, HIGH);
    Serial.println("led on");
   }
    if(data=='0')
    {
      digitalWrite(13, LOW);
      Serial.println("led of");
    }
    
    }
    }
 

