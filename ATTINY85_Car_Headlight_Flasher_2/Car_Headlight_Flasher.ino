int releasepin=5, connectpin=6, switchpin=3;

void setup() {
  // put your setup code here, to run once:
pinMode(releasepin,OUTPUT);
pinMode(connectpin,OUTPUT);
pinMode(switchpin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(switchpin)==LOW)
{
digitalWrite(releasepin,HIGH);
delay(20);
digitalWrite(connectpin,HIGH);
delay(700);
digitalWrite(connectpin,LOW);
delay(300);
}
else
digitalWrite(releasepin, LOW);
}
