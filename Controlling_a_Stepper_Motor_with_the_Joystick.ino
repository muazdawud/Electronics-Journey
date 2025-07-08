//#include <Stepper.h>
//
//const int stepsPerRevolution = 2038;
//Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);
//
//int X = A0;
//int Y = A1;
//int S = 2;
//int Xval, Yval, Sval;
//int del = 1000;
//
////int xj(){
////  int val = 
////  
////  
////  return val;
////}
////
////int yj(){
////  int val = 
////  
////  
////  return val;
////}
//
//void setup(){
//  pinMode(X, INPUT);
//  pinMode(Y, INPUT);
//  pinMode(S, INPUT);
//
//  Serial.begin(9600);
//  digitalWrite(S, HIGH);
//}
//
//void loop(){
//  Xval =  analogRead(X);
//  Yval =  analogRead(Y);
//  
//  Xval /= 100;
//  Yval /= 10;
//  Yval *= 15;
//  Yval /= 100;
//  if(Yval == 0){ Yval = 1; }
//
//  Serial.print("X value = ");
//  Serial.print(Xval);
//  Serial.print(" | Y value = ");
//  Serial.print(Yval);
//  Serial.print(" | S value = ");
//  Serial.println(Sval);
//  Serial.println();
//
//  if(Xval >= 5){
//    myStepper.setSpeed(Yval);
//    myStepper.step(stepsPerRevolution);
//  }else{
//    myStepper.setSpeed(Yval);
//    myStepper.step(-stepsPerRevolution);
//  }
//
////  while(Sval == LOW){
////    myStepper.setSpeed(0);
////    myStepper.step(stepsPerRevolution);
////  }
//}
