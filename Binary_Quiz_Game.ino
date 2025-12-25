//#define DATA 6 // connect to pin 14 on the 74HC595
//#define LATCH 8 // connect to pin 12 on the 74HC595
//#define CLOCK 10 // connect to pin 11 on the 74HC595
//int number = 0;
//int answer = 0;
//int gdel = 2500;
//int cdel = 5000;
//
//void setup() {
//  pinMode(DATA, OUTPUT);
//  pinMode(LATCH, OUTPUT);
//  pinMode(CLOCK, OUTPUT);
//
//  Serial.begin(9600);
//  randomSeed(analogRead(0));
//  
//  displayNumber(0); 
//}
//
//void displayNumber(byte a){
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, MSBFIRST, a);
//  digitalWrite(LATCH, HIGH);
//}
//
//void getAnswer(){
//  //Serial.flush();
//  
//  while(Serial.available() > 0){
//    Serial.read();
//  }
//
//  Serial.println("What is the number in Base 10?");
//
//  while(Serial.available() == 0){
//    
//  }
//
////  unsigned long startTime = millis();
////  while (Serial.available() == 0) {
////    if (millis() - startTime > 30000) { // 30-second timeout
////      Serial.println("Timeout. Restarting...");
////      return;
////    }
////  }
//
//  //while(Serial.available() > 0){
//    answer = Serial.parseInt();
//  //}
//
//  while (Serial.available() > 0) {
//    Serial.read();
//  }
//    
//  Serial.print("You entered: ");
//  Serial.println(answer);
//  Serial.println();
//   
//}
//
//void checkAnswer(){
//  if(answer == number){
//    Serial.println("Correct! ");
//    Serial.print(answer, BIN);
//    Serial.print(" equals ");
//    Serial.println(number);
//    Serial.println();
//  } else {
//    Serial.println("Incorrect! ");
//    Serial.print(answer, BIN);
//    Serial.print(" is not equals ");
//    Serial.println(number);
//    Serial.println();
//  }
//  delay(cdel);
//  number = 0;
//}
//
//void loop() {
//  number = random(256);
//  displayNumber(number);
//   
//  getAnswer();
//  checkAnswer();
//  
//}
