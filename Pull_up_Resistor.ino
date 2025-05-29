int led = 6;
int pin = 7;
int del = 5000;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(pin, INPUT);
digitalWrite(pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, LOW);
if(digitalRead(pin) == LOW){
  digitalWrite(led, HIGH);
  //delay(del);
}else{
  digitalWrite(led, LOW);
}
}
