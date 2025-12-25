////#define DATA 8
////#define LATCH 9
////#define CLOCK 10
////
////int del = 1000;
////byte byte1 = 0xf0;
////byte byte2;
////
////void setup(){
////  pinMode(DATA, OUTPUT);
////  pinMode(CLOCK, OUTPUT);
////  pinMode(LATCH, OUTPUT);
////
////  Serial.begin(9600);
////}
////
////void loop(){
////  byte2 = 255-byte1;
////  
////  Serial.print(byte1);
////  Serial.print("\t|");
////  Serial.print("\t");
////  Serial.println(byte2);
////  
////  digitalWrite(LATCH, LOW);
////  shiftOut(DATA, CLOCK, LSBFIRST, byte1);
////  digitalWrite(LATCH, HIGH);
////  delay(del);
////  digitalWrite(LATCH, LOW);
////  shiftOut(DATA, CLOCK, LSBFIRST, byte2);
////  digitalWrite(LATCH, HIGH);
////  delay(del);
////}
//
//#define DATA 8
//#define LATCH 9
//#define CLOCK 10
//
//int nin = B11111111; 
//int ben = B00000000;
//int del = 500;
//int del = 1000;
//byte byte1 = 0xf0;
//byte byte2;
//
//void setup(){
//  pinMode(DATA, OUTPUT);
//  pinMode(CLOCK, OUTPUT);
//  pinMode(LATCH, OUTPUT);
//}
//
//void loop(){  
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, LSBFIRST, nin);
//  digitalWrite(LATCH, HIGH);
//  delay(del);
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, LSBFIRST, ben);
//  digitalWrite(LATCH, HIGH);
//  delay(del);
//}
//
//  Serial.begin(9600);
//}
//
//void loop(){
//  byte2 = 255-byte1;
//  
//  Serial.print(byte1);
//  Serial.print("\t|");
//  Serial.print("\t");
//  Serial.println(byte2);
//  
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, LSBFIRST, byte1);
//  digitalWrite(LATCH, HIGH);
//  delay(del);
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, LSBFIRST, byte2);
//  digitalWrite(LATCH, HIGH);
//  delay(del);
//}
//  
