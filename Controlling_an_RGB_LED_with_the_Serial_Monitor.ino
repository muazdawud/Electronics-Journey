//int rled = 11;
//int gled = 10;
//int bled = 9;
//int del = 500;
//int sdel = 3;
//int val;
//
//void setup() {
//  pinMode(rled, OUTPUT);
//  pinMode(gled, OUTPUT);
//  pinMode(bled, OUTPUT);
//  Serial.begin(9600);
//}
//
//void lights(int val) {
//  for(int i = 0; i <  val; i++){
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
//void loop() {
//  Serial.flush();
//  while(Serial.available() == 0){
//    
//  }
//  while(Serial.available() > 0){
//    val = Serial.read() - '0';
//  }
//
//  lights(val);
// 
//  delay(del);
//}
