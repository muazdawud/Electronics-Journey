//#define Rled 9
//#define Bled 8
//#define Sw 10
//
//int del = 1000;
//int val;
//
//void setup(){
//  pinMode(Rled, OUTPUT);
//  pinMode(Bled, OUTPUT);
//  pinMode(Sw, INPUT);
//  digitalWrite(Sw, HIGH);
//
//  Serial.begin(9600);
//}
//
//void loop(){
//  digitalWrite(Bled, HIGH);
//  val = digitalRead(Sw);
//  
//  if(val == 1){
//    digitalWrite(Rled, HIGH);
//    digitalWrite(Bled, LOW);
//  }else{
//    digitalWrite(Rled, LOW);
//    digitalWrite(Bled, HIGH);
//  }
//
//  Serial.print("Tilt value = ");
//  Serial.println(val);
//}
