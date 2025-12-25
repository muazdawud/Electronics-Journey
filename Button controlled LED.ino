int led = 8;
int but = 9;
int del = 10000;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(but,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(but) == HIGH){
  digitalWrite(led, HIGH);
  //delay(del);
}else{
  digitalWrite(led, LOW);
}
}
