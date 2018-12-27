  #include <TinyDebugSerial.h>
 //runs on attiny85

 
int voltage = 0;

void setup() {  
TinyDebugSerial mySerial = TinyDebugSerial();         
mySerial.begin(9600);

//RX for debug now on PB4/pin2

pinMode(A1,INPUT);                            
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
}

//"0" is real world pin 5 on attiny
//"1" is real world pin 6 on attiny


void loop() {

voltage = analogRead(A1);
  
  // put your main code here, to run repeatedly:

if (voltage <= 250)
{
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);

}

if ((voltage > 251) && (voltage <= 500))
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);

}  

if ((voltage > 501) && (voltage <= 750))
{
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);

}

if (voltage > 751)
{
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);

}

}
