//#include <Stepper.h>
//
//const int stepsPerRevolution = 2038;
//
//int pin = 13;
//
//Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);
//
//void setup() {
//    
//}
//
//void loop() {
//  digitalWrite(pin, HIGH);
//
//  for(int i = 0; i < 1000; i++){
//  myStepper.setSpeed(15);
//  myStepper.step(stepsPerRevolution);
//  //delay(1000);
//  
////  myStepper.setSpeed(10);
////  myStepper.step(-stepsPerRevolution);
////  delay(1000);
//  }
//
//  digitalWrite(pin,LOW);
//  delay(1000);
//}
