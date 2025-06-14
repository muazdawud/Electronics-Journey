//#include<Keypad.h>
//#include<Servo.h>
//
//const byte row = 4;
//const byte col = 3;
//const int ServoPin = 10;
//
//char Keys[row][col] = {
//  {'1', '2', '3'},
//  {'4', '5', '6'},
//  {'7', '8', '9'},
//  {'+', '0', '-'}
//};
//
//byte rowPin[row] = {6, 7, 8, 9};
//byte colPin[col] = {5, 4, 3};
//
//Keypad myPad = Keypad(makeKeymap(Keys), rowPin, colPin, row, col);
//Servo myServo;
//
//void setup(){
//  Serial.begin(9600);
//  myServo.attach(ServoPin);
//}
//
//void loop(){
//  char val = myPad.getKey();
//  int num;
//  
//  if(val){
//    if(val == '0'){
//      num = 0;
//    }else if(val == '1'){
//      num = 1;
//    }else if(val == '2'){
//      num = 2;
//    }else if(val == '3'){
//      num = 3;
//    }else if(val == '4'){
//      num = 4;
//    }else if(val == '5'){
//      num = 5;
//    }else if(val == '6'){
//      num = 6;
//    }else if(val == '7'){
//      num = 7;
//    }else if(val == '8'){
//      num = 8;
//    }else if(val == '9'){
//      num = 9;
//    }
//
//    num = map(num, 1, 9, 0, 180);
//    
//    Serial.print("Val =\t");
//    Serial.print(val);
//    Serial.print(" | \tNum =\t");
//    Serial.println(num);
//    
//    myServo.write(num);
//  }
//}
//
