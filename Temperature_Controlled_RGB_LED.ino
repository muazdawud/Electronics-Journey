//#define RLED 11
//#define GLED 10
//#define BLED 9
//#define TMP 0
//float val;
//int UPPER = 39;
//int LOWER = 28;
//int del = 100;
//
//void setup() {
//  pinMode(RLED, OUTPUT);
//  pinMode(GLED, OUTPUT);
//  pinMode(BLED, OUTPUT);
//}
//
//void loop() {
//  int voltage, celsius;
//  // read the temperature sensor and convert the result to degrees Celsius
//  val = analogRead(0);
//  voltage = (val*5000)/1024; // convert raw sensor value to millivolts
//  voltage = voltage-500; // remove voltage offset
//  celsius = voltage/10; // convert millivolts to C
// 
//  if(celsius > UPPER){
//    digitalWrite(GLED, LOW);
//    digitalWrite(BLED, LOW);
//    digitalWrite(RLED, HIGH);
//  }else if(celsius < LOWER){
//    digitalWrite(RLED, LOW);
//    digitalWrite(GLED, LOW);
//    digitalWrite(BLED, HIGH);
//  }else{
//    digitalWrite(RLED, LOW);
//    digitalWrite(BLED, LOW);
//    digitalWrite(GLED, HIGH);
//  }
//  delay(del);
//}
