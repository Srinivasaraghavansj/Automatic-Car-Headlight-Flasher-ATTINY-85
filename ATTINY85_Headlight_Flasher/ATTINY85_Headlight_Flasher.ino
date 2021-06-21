int releasepin=3, connectpin=4, switchpin=2;

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
digitalWrite(releasepin,LOW);
delay(20);
digitalWrite(connectpin,LOW);
delay(700);
digitalWrite(connectpin,HIGH);
delay(300);
}
else
digitalWrite(releasepin, HIGH);
}
