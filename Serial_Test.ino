//int rled = 11;
//int gled = 10;
//int bled = 9;
//int del = 500;
//int sdel = 3;
//int val;
//
//void setup(){
//  pinMode(rled, OUTPUT);
//  pinMode(gled, OUTPUT);
//  pinMode(bled, OUTPUT);
//  
//  Serial.begin(9600);
//}
//
//void rgblights(int val1) {
//  for(int i = 0; i <  val1; i++){
//    for(int j = 0; j < 256; j++){
//      analogWrite(rled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(rled, j);
//      delay(sdel);   
//    }
//    digitalWrite(rled, LOW);
//    
//    for(int j = 0; j < 256; j++){
//      analogWrite(gled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(gled, j);
//      delay(sdel);
//    }
//    digitalWrite(gled, LOW);
//    
//    for(int j = 0; j < 256; j++){
//      analogWrite(bled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(bled, j);
//      delay(sdel);
//    }
//    digitalWrite(bled, LOW);
//  }
//}
//
//void serial(){
//  Serial.println("Enter the number of iterations");
//
//  Serial.flush();
//}
//
//void loop() {
//  Serial.flush();
//  serial();
//  Serial.flush();
//
//  while(Serial.available() == 0){
//    
//  }
// 
//  val = Serial.parseInt();
//  
//  rgblights(val);
//
//  delay(del);
//  Serial.flush();
//}
//
//
//
//
//
