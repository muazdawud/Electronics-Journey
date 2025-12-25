////const int ROWS = 4; 
////const int COLS = 4; 
////char hexaKeys[ROWS][COLS] = {
////  {'0','1','2','3'},
////  {'4','5','6','7'},
////  {'8','9','A','B'},
////  {'C','D','E','F'}
////};
////
////int del = 500;
////int colPins[COLS] = {6, 7, 8, 9}; 
////int rowPins[ROWS] = {10, 11, 12, 13}; 
////
////void setup(){
////  for(int i = 0; i < 4; i++){
////    pinMode(rowPins[i], INPUT);
////    pinMode(colPins[i], INPUT);
////  }
////
////  for(int i = 0; i < 4; i++){
////    digitalWrite(rowPins[i], LOW);
////    digitalWrite(colPins[i], LOW);
////  }
////  
////  Serial.begin(9600);
////}
////
////void loop(){
////  if(digitalRead(rowPins[0]) == HIGH){
////    if(digitalRead(colPins[0]) == HIGH){
////      Serial.println(hexaKeys[0][0]);
////      delay(del);
////    }else if(digitalRead(colPins[1]) == HIGH){
////      Serial.println(hexaKeys[0][1]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[0][2]);
////      delay(del);
////    }else if(digitalRead(colPins[3]) == HIGH){
////      Serial.println(hexaKeys[0][3]);
////      delay(del);
////    }
////  }
////
////  if(digitalRead(rowPins[1]) == HIGH){
////    if(digitalRead(colPins[0]) == HIGH){
////      Serial.println(hexaKeys[1][0]);
////      delay(del);
////    }else if(digitalRead(colPins[1]) == HIGH){
////      Serial.println(hexaKeys[1][1]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[1][2]);
////      delay(del);
////    }else if(digitalRead(colPins[3]) == HIGH){
////      Serial.println(hexaKeys[1][3]);
////      delay(del);
////    }
////  }
////
////  if(digitalRead(rowPins[2]) == HIGH){
////    if(digitalRead(colPins[0]) == HIGH){
////      Serial.println(hexaKeys[2][0]);
////      delay(del);
////    }else if(digitalRead(colPins[1]) == HIGH){
////      Serial.println(hexaKeys[2][1]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[2][2]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[2][2]);
////      delay(del);
////    }
////  }
////
////  if(digitalRead(rowPins[3]) == HIGH){
////    if(digitalRead(colPins[0]) == HIGH){
////      Serial.println(hexaKeys[3][0]);
////      delay(del);
////    }else if(digitalRead(colPins[1]) == HIGH){
////      Serial.println(hexaKeys[3][1]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[3][2]);
////      delay(del);
////    }else if(digitalRead(colPins[2]) == HIGH){
////      Serial.println(hexaKeys[3][2]);
////      delay(del);
////    }
////  }
////}
//
//
//#include <Keypad.h>
//
//const byte ROWS = 4; /* four rows */
//const byte COLS = 4; /* four columns */
///* define the symbols on the buttons of the keypads */
//char hexaKeys[ROWS][COLS] = {
//  {'0','1','2','3'},
//  {'4','5','6','7'},
//  {'8','9','A','B'},
//  {'C','D','E','F'}
//};
//byte rowPins[ROWS] = {6, 7, 8, 9}; /* connect to the row pinouts of the keypad */
//byte colPins[COLS] = {5, 4, 3, 2}; /* connect to the column pinouts of the keypad */
//
///* initialize an instance of class NewKeypad */
//Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
//
//void setup(){
//  Serial.begin(9600);
//}
//
//void loop(){
//  char customKey = customKeypad.getKey();
//
//  if(customKey){
//    Serial.println(customKey);
//  }
//}
