//int rled = 11;
//int gled = 10;
//int bled = 9;
//int del = 4000;
//int sdel = 5;
//int bdel = 2000;
//int val1, val2;
//
//void setup() {
//  pinMode(rled, OUTPUT);
//  pinMode(gled, OUTPUT);
//  pinMode(bled, OUTPUT);
//  
//  Serial.begin(9600);
//}
//
//void rgblights(int val) {
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
//void cmylights(int val) {
//  for(int i = 0; i <  val; i++){
//    for(int j = 0; j < 256; j++){
//      analogWrite(rled, j);
//      analogWrite(gled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(rled, j);
//      analogWrite(gled, j);
//      delay(sdel);   
//    }
//    digitalWrite(rled, LOW);
//    
//    for(int j = 0; j < 256; j++){
//      analogWrite(bled, j);
//      analogWrite(gled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(bled, j);
//      analogWrite(gled, j);
//      delay(sdel);
//    }
//    digitalWrite(gled, LOW);
//    
//    for(int j = 0; j < 256; j++){
//      analogWrite(rled, j);
//      analogWrite(bled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(rled, j);
//      analogWrite(bled, j);
//      delay(sdel);
//    }
//    digitalWrite(bled, LOW);
//  }
//}
//
//void white(int num) {
//  for(int i = 0; i < num; i++){
//    for(int j = 0; j < 256; j++){
//      analogWrite(rled, j);
//      analogWrite(gled, j);
//      analogWrite(bled, j);
//      delay(sdel);
//    }
//    
//    for(int j = 255; j > 0; j--){
//      analogWrite(rled, j);
//      analogWrite(gled, j);
//      analogWrite(bled, j);
//      delay(sdel);   
//    }
//    digitalWrite(rled, LOW);
//    digitalWrite(gled, LOW);
//    digitalWrite(bled, LOW);
//    delay(bdel);
//  }
//}
//
//void serial1(){
//  Serial.println("Hello, How's your day?");
//  Serial.println("From the options below, choose an operation;");
//  Serial.println("1. Iterate through RGB colours.");
//  Serial.println("2. Iterate through CMY colours.");
//  Serial.println("3. Produce the white light");
//
//  //Serial.println("Choose an option, then a comma and write the number of iterations");
//}
//
//int serial2(){
//  int val;
//  //int va;
//  while(Serial.available() == 0){
//    
//  }
//  
//  val = Serial.parseInt();
//  //va = Serial.parseInt();
//
//  while (Serial.available() > 0) {
//    Serial.read();
//  }
//
//  return val;
//}
//
//void serial4(){
//  Serial.println(" ");
//  Serial.println("Press 'Clear Output' at the right-button end of this tab in less than 3 sec");
//  Serial.println("Press 'Clear Output' at the right-button end of this tab in less than 3 sec");
//}
//
//void loop() {
//  Serial.flush();
//  serial1();
//    
//  //val1 = serial2();
//
////  while(Serial.available() == 0){
////    
////  }
//
//  delay(bdel);
//  
//  val1 = serial2();
//
//  delay(del);
//
//  Serial.println();
//  Serial.print("You chose option: ");
//  Serial.println(val1);
//
//  Serial.println();
//  Serial.println("Enter the number of iterations");
//   
//  val2 = serial2();
//
//  Serial.println();
//  Serial.print("Number of iterations: ");
//  Serial.println(val2);
//  
//  //val2 = serial2();
//   
//  if(val1 == 1){
//    
////    Serial.print("Your iterations: ");
////    Serial.println(val2);
//   
//    rgblights(val2);
//    delay(bdel);
//  }else if(val1 == 2){
//       
////    Serial.print("Your iterations: ");
////    Serial.println(val2);
//   
//    cmylights(val2);
//    delay(bdel);
//  }else if(val1 == 3){
//        
////    Serial.print("Your iterations: ");
////    Serial.println(val2);
//    
//    white(val2);
//    delay(bdel);
//  }else{
//   
//    Serial.println("You chose on invalid option");
//   
//    delay(del);
//  }
//
//  serial4();
//  
//  delay(del);
//  Serial.flush();
//}
