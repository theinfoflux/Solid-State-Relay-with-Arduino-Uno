int ssr=3; //solid state relay pin
int ir=5;  // ir sensor pin
void setup() {
Serial.begin(9600);
pinMode(ir,INPUT);
pinMode(ssr,OUTPUT);  
}

void loop() {
int irstate=digitalRead(ir);
Serial.println(irstate);
if(irstate==HIGH)
{
  digitalWrite(ssr,HIGH);
  Serial.println("Solid state relay is turned on");
  delay(1000);
  }
else if(irstate==LOW)
  {
    digitalWrite(ssr,LOW);
    }
}
