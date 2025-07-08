

////Bounce Off Effect
//
//int led1[] = {6, 7, 8, 9, 10, 11, 12, 13};
//int del = 50;
//int sdel = 100;
//
//void setup() {
//  // put your setup code here, to run once:
//for(int i = 0, j = 7; i < 4 && j > 3; i++, j--){
//    pinMode(led1[i], OUTPUT);
//    pinMode(led1[j], OUTPUT);
//  }
//}
//
//void loop() {
//  for(int i = 0; i < 4; i++){
//    
//  for(int i = 0, j = 7; i < 4 && j > 3; i++, j--){
//    digitalWrite(led1[i], LOW);
//    digitalWrite(led1[j], LOW);
//  }
//
//  for(int i = 0, j = 7; i < 4 && j > 3; i++, j--){
//    digitalWrite(led1[i], HIGH);
//    digitalWrite(led1[j], HIGH);
//    delay(del);
//    digitalWrite(led1[i], LOW);
//    digitalWrite(led1[j], LOW);
//    }
//
//  for(int i = 3, j = 4; i >= 0 && j <= 7; i--, j++){
//    digitalWrite(led1[i], HIGH);
//    digitalWrite(led1[j], HIGH);
//    delay(del);
//    digitalWrite(led1[i], LOW);
//    digitalWrite(led1[j], LOW);
//  }
//  
//  }
//
//  for(int i = 0; i < 2; i++){
//    
//  for(int i = 0, j = 7; i < 4 && j > 3; i++, j--){
//    digitalWrite(led1[i], HIGH);
//    digitalWrite(led1[j], HIGH);
//    delay(sdel);
//    digitalWrite(led1[i], LOW);
//    digitalWrite(led1[j], LOW);
//    }
//
//  for(int i = 3, j = 4; i >= 0 && j <= 7; i--, j++){
//    digitalWrite(led1[i], HIGH);
//    digitalWrite(led1[j], HIGH);
//    delay(sdel);
//    digitalWrite(led1[i], LOW);
//    digitalWrite(led1[j], LOW);
//  }
//  
//  }
//  for(int i = 0; i < 8; i++){
//    digitalWrite(led1[i], LOW);
//  }
//  
//  delay(del);
//}
//
