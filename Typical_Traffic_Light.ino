int ledDelay = 10000;
void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Red LED is ON
digitalWrite(10, HIGH);
delay(ledDelay);
//digitalWrite(8, LOW);

//Now Yellow LED is ON
digitalWrite(9, HIGH);
delay(2000);
//digitalWrite(9, LOW);

//Now Green LED is ON
digitalWrite(8, HIGH);

//Red and Yellow LED are going OFF
digitalWrite(10, LOW);
digitalWrite(9, LOW);
delay(ledDelay);

//Yelllow LED is ON
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
delay(2000);
digitalWrite(9, LOW);
}
