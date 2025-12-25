//#include<Keypad.h>
//#define CLOCK 12
//#define LATCH 11
//#define DATA 10
//
//const byte row = 4;
//const byte col = 3;
//
//char Keys[row][col] = {
//  {'1', '2', '3'},
//  {'4', '5', '6'},
//  {'7', '8', '9'},
//  {'*', '0', '#'}
//};
//
//byte rowPins[row] = {6, 7, 8, 9};
//byte colPins[col] = {5, 4, 3};
//
//int del = 1000;
//int nums[10] = {2, 4, 8, 64, 128, 6, 10, 12, 14, 0};
//
//Keypad myPad = Keypad(makeKeymap(Keys), rowPins, colPins, row, col);
//
//void setup(){
//  pinMode(CLOCK, OUTPUT);
//  pinMode(LATCH, OUTPUT);
//  pinMode(DATA, OUTPUT);
//
//  shiftOut(DATA, CLOCK, MSBFIRST, 0);
//
//  Serial.begin(9600);
//  Serial.println("Hello, How's your day?");
//  Serial.println("Please choose from the below options;");
//  Serial.println("1. RGB RED \n2. RGB GREEN \n3. RGB BLUE \n4. BLUE \n5. RED \n6. RGB RED+GREEN  \n7. RGB RED+BLUE \n8. RGB GREEN+BLUE \n9. WHITE \n0. TURN OFF");
//}
//
//void loop(){
//  char input = myPad.getKey();
//  
//  digitalWrite(LATCH, LOW);
//    
//  if(input){
//    Serial.print(input);
//    Serial.print("\t|\t");
//    
//    if(input == '1'){
//        Serial.println(nums[0], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[0]);
//    }else if(input == '2'){
//        Serial.println(nums[1], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[1]);
//    }else if(input == '3'){
//        Serial.println(nums[2], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[2]);
//    }else if(input == '4'){
//        Serial.println(nums[3], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[3]);
//    }else if(input == '5'){
//        Serial.println(nums[4], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[4]);
//    }else if(input == '6'){
//        Serial.println(nums[5], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[5]);
//    }else if(input == '7'){
//        Serial.println(nums[6], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[6]);
//    }else if(input == '8'){
//        Serial.println(nums[7], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[7]);
//    }else if(input == '9'){
//        Serial.println(nums[8], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[8]);
//    }else if(input == '0'){
//        Serial.println(nums[9], BIN);
//      shiftOut(DATA, CLOCK, MSBFIRST, nums[9]);
//    }else{
//      Serial.println("Invalid Value");
//      return;
//    }
//  }
//
//  digitalWrite(LATCH, HIGH);
//}
