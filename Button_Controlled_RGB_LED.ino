//int led[] = {3, 5, 9, 10};
//int but = 6;
//int del = 10;
//int sdel = 500;
//unsigned long changeTime;
//
//void setup() {
//  for(int i = 0; i < 3; i++){
//    pinMode(led[i], OUTPUT);
//  }
//  pinMode(but, INPUT);
//  for(int i = 0; i < 3; i++){
//    digitalWrite(led[i], HIGH);
//  }
//}
//
//void loop() {
//  if(digitalRead(but) == HIGH){
//    /*changeTime = millis();*/
//    /*if((millis()-changeTime) > 3 && digitalRead(but) == HIGH){*/
//      for(int i = 0; i < 3; i++){
//        digitalWrite(led[i], LOW);
//        delay(500);
//        }
//        lights();
//    //}
//  }else{
//   for(int i = 0; i < 256; i++){
//    analogWrite(led[1], i);
//    analogWrite(led[2], i);
//    analogWrite(led[3], i);
//    delay(del);
//  }
//  for(int i = 255; i >= 0; i--){
//    analogWrite(led[1], i);
//    analogWrite(led[2], i);
//    analogWrite(led[3], i);
//    delay(del);
//  }
//  }
//}
//
//void lights(){
//  digitalWrite(led[1], HIGH);
//  delay(sdel);
//  digitalWrite(led[1], LOW);
//  digitalWrite(led[2], HIGH);
//  delay(sdel);
//  digitalWrite(led[2], LOW);
//  digitalWrite(led[3], HIGH);
//  delay(sdel);
//  digitalWrite(led[3], LOW);
//  digitalWrite(led[4], HIGH);
//  delay(sdel);
//  digitalWrite(led[4], LOW);
//}
