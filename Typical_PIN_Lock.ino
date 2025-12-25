//#include<Keypad.h>
//
//const byte row = 4;
//const byte col = 3;
//
//char Keys[row][col] = {
//  {'1', '2', '3'},
//  {'4', '5', '6'},
//  {'7', '8', '9'},
//  {'x', '0', '>'}
//};
//
//int bdel = 500;
//int del = 1;
//int i = 0;
//
//byte rowPin[row] = {5, 4, 3, 2};
//byte colPin[col] = {6, 7, 8};
//
//char pin[4] = {'1', '1', '1', '1'};
//char input[4] = {0}; 
//
//Keypad myPad = Keypad(makeKeymap(Keys), rowPin, colPin, row, col);
//
//void setup(){
//  Serial.begin(9600);
//  Serial.println("Enter your PIN");
//}
//
//void Enter(){
//  Serial.println();
//  Serial.print("Showing result  ->\t");
//  for(int i = 0; i < 4; i++){
//    Serial.print(input[i]);
//  }
//  Serial.println();
//  delay(bdel);
//}
//
//void Enter2(int n){
//  delay(bdel);
//  if(n == 1){
//    Serial.println("UNLOCKED");
//  }else{
//    Serial.println("WRONG PIN");
//  }
//
//  i = 0;
//  Serial.println("-------------------END------------------");
//}
//
//void insert(char val){
//  if(i == 4){val = '0'; return;}
//  input[i] = val;
//  Serial.print(val);
//
//  i++;
//}
//
//void compare(){
//  bool test = true;
//
//  Enter();
//  
//  for(int i = 0; i < 4; i++){
//    if(input[i] == pin[i]){
//      test = true;
//    }else{
//      test = false;
//      break;
//    }
//  }
//  
//  if(test){
//    Enter2(1);
//  }else{
//    Enter2(2);
//  }
//  
//  allClear();
//}
//
//void Delete(){
//  i--;
//  Serial.println();
//  Serial.println(input[i]);
//  
//  input[i] = '0';
//  
//  for(int j = 0; j < i; j++){
//    Serial.print(input[j]);
//  }
//}
//
//void allClear(){
//  for(int j = 0; j < 4; j++){
//    input[j] = '0';
//  }
//}
//
//void loop(){
//  char inp = myPad.getKey();
//
//  if(inp){
//    if(inp == 'x'){
//      Delete();
//      return;
//    }else if(inp == '>'){
//      compare();
//      return;
//    }else{
//      insert(inp);
//    }
//  }
//}
