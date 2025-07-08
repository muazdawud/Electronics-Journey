////#include<Keypad.h>
//////
//////const byte row = 4;
//////const byte col = 3;
//////
//////int Gpins[4] = {15, 16, 17, 18};
//////
//////int led[] = {9, 10, 11, 12, 13, 14, 19};
//////
//////char Keys[row][col] = {
//////  {'1', '2', '3'},
//////  {'4', '5', '6'},
//////  {'7', '8', '9'},
//////  {'x', '0', '>'}
//////};
//////
//////int number[10][7] = {
//////  {1, 1, 1, 1, 1, 1, 0},
//////  {0, 1, 1, 0, 0, 0, 0},
//////  {1, 1, 0, 1, 1, 0, 1},
//////  {1, 1, 1, 1, 0, 0, 1},
//////  {0, 1, 1, 0, 0, 1, 1},
//////  {1, 0, 1, 1, 0, 1, 1},
//////  {1, 0, 1, 1, 1, 1, 1},
//////  {1, 1, 1, 0, 0, 0, 0},
//////  {1, 1, 1, 1, 1, 1, 1},
//////  {1, 1, 1, 1, 0, 1, 1}
//////};
//////
//////int bdel = 500;
//////int del = 2;
//////int m = 0;
//////
//////int yes[4][7] = {
//////  {0,0,0,0,0,0,1},
//////  {0,1,1,1,0,1,1},
//////  {1,0,0,1,1,1,1},
//////  {1,0,1,1,0,1,1}
//////};
//////
//////int no[4][7] = {
//////  {0,0,0,1,1,1,0},
//////  {1,1,1,1,1,1,0},
//////  {1,0,0,1,1,1,0},
//////  {1,1,1,1,1,1,1}
//////};
//////
//////int nothing[] = {0,0,0,0,0,0,1};
//////
//////byte rowPin[row] = {5, 4, 3, 2};
//////byte colPin[col] = {6, 7, 8};
//////
//////char pin[4] = {'1', '1', '1', '1'};
//////char input[4] = {0}; 
//////
//////Keypad myPad = Keypad(makeKeymap(Keys), rowPin, colPin, row, col);
//////
//////void Displayno(int no[7]){
//////  for(int i = 0; i < 4; i++){
//////    digitalWrite(Gpins[i], LOW);
//////  }
//////
//////  for(int i = 0; i < 7; i++){
//////    digitalWrite(led[i], no[i]);
//////  }
//////}
//////
//////void state(int arr[][7], int val){
//////  for(int i = 0; i < 4; i++){
//////    digitalWrite(Gpins[i], HIGH);
//////  }
//////
//////  switch(val+1){
//////    case 1: digitalWrite(Gpins[val], LOW); break;
//////    case 2: digitalWrite(Gpins[val], LOW); break;
//////    case 3: digitalWrite(Gpins[val], LOW); break;
//////    case 4: digitalWrite(Gpins[val], LOW); break; 
//////  }
//////
//////  for(int i = 0; i < 7; i++){
//////    digitalWrite(led[i], arr[val][i]);
//////  }
//////}
//////
//////void DisplayResult(int num, char val){
//////  for(int i = 0; i < 4; i++){
//////    digitalWrite(Gpins[i], HIGH);
//////  }
//////
//////  val = val - '0';
//////  
//////  switch(num+1){
//////    case 1: digitalWrite(Gpins[num], LOW); break;
//////    case 2: digitalWrite(Gpins[num], LOW); break;
//////    case 3: digitalWrite(Gpins[num], LOW); break;
//////    case 4: digitalWrite(Gpins[num], LOW); break;
//////  }
//////
//////  for(int i = 0; i < 7; i++){
//////    digitalWrite(led[i], number[val][i]); 
//////  }
//////}
//////
//////void insert(char val){
//////  if(m == 4){val = '0'; return;}
//////  input[m] = val;
//////  Serial.print(val);
//////
//////  m++;
//////}
//////
//////void Enter(){
//////  Serial.println();
//////  Serial.print("Showing result  ->\t");
//////  for(int i = 0; i < 4; i++){
//////    Serial.print(input[i]);
//////  }
//////  Serial.println();
//////  delay(bdel);
//////}
//////
//////void Enter2(int n){
//////  delay(bdel);
//////  if(n == 1){
//////    Serial.println("UNLOCKED");
//////  }else{
//////    Serial.println("WRONG PIN");
//////  }
//////
//////  m = 0;
//////  Serial.println("-------------------END------------------");
//////}
//////
//////void compare(){
//////  bool test = true;
//////
//////  Enter();
//////  
//////  for(int i = 0; i < 4; i++){
//////    if(input[i] == pin[i]){
//////      test = true;
//////    }else{
//////      test = false;
//////      break;
//////    }
//////  }
//////  
//////  if(test){
//////    Enter();
//////    Enter2(1);
//////    
//////    for(int i = 0; i < 5000; i++){
//////      for(int i = 0; i < 4; i++){
//////        DisplayResult(i, input[i-1]);
//////      }
//////    }
//////    for(int i = 1; i > 0; i++){
//////      for(int i = 0; i < 4; i++){
//////        state(yes, i);
//////      }
//////    }
//////  }else{
//////    Enter();
//////    Enter2(2);
//////    
//////    for(int i = 0; i < 5000; i++){
//////      for(int i = 0; i < 4; i++){
//////        DisplayResult(i, input[i-1]);
//////      }
//////    }
//////    for(int i = 1; i > 0; i++){
//////      for(int i = 0; i < 4; i++){
//////        state(no, i);
//////      }
//////    }
//////  }
//////  
//////  allClear();
//////}
//////
//////void Delete(){
//////  m--;
//////  Serial.println();
//////  Serial.println(input[m]);
//////  
//////  input[m] = '0';
//////  
//////  for(int j = 0; j < m; j++){
//////    Serial.print(input[j]);
//////  }
//////}
//////
//////void allClear(){
//////  for(int j = 0; j < 4; j++){
//////    input[j] = '0';
//////  }
//////}
//////
//////void setup(){
//////  for(int i = 0; i < 4; i++){
//////    pinMode(Gpins[i], OUTPUT);
//////  }
//////
//////  for(int i = 0; i < 5000; i++){
//////    for(int i = 0; i < 4; i++){
//////      state(no, i);
//////    }
//////  }
//////  for(int i = 0; i < 5000; i++){
//////    for(int i = 0; i < 4; i++){
//////      state(no, i);
//////    }
//////  }
//////  
//////  Displayno(nothing);
//////
//////  Serial.begin(9600);
//////  Serial.println("Enter your PIN");
//////}
//////
//////void loop(){
//////  char inp = myPad.getKey();
//////
//////  if(inp){
//////    if(inp == 'x'){
//////      Delete();
//////      return;
//////    }else if(inp == '>'){
//////      compare();
//////      return;
//////    }else{
//////      insert(inp);
//////    }
//////  }
//////}
////ENNNNNNNNNNNNNDDDDDDDDDD
//
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
//byte rowPin[row] = {5, 4, 3, 2};
//byte colPin[col] = {6, 7, 8};
//
//int Gpins[4] = {15, 16, 17, 18};
//
//int led[] = {9, 10, 11, 12, 13, 14, 19};
//
//int number[10][7] = {
//  {1, 1, 1, 1, 1, 1, 0},
//  {0, 1, 1, 0, 0, 0, 0},
//  {1, 1, 0, 1, 1, 0, 1},
//  {1, 1, 1, 1, 0, 0, 1},
//  {0, 1, 1, 0, 0, 1, 1},
//  {1, 0, 1, 1, 0, 1, 1},
//  {1, 0, 1, 1, 1, 1, 1},
//  {1, 1, 1, 0, 0, 0, 0},
//  {1, 1, 1, 1, 1, 1, 1},
//  {1, 1, 1, 1, 0, 1, 1}
//};
//
//int up1[4][7] = {
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1}
//};
//
//int down1[4][7] = {
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1}
//};
//
//int up2[4][7] = {
//  {1, 1, 0, 0, 0, 1, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {0, 0, 1, 1, 1, 0, 1}
//};
//
//int down2[4][7] = {
//  {0, 0, 1, 1, 1, 0, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {1, 1, 0, 0, 0, 1, 1}
//};
//
//
//int del = 5;
//char pin[4] = {'1', '1', '1', '1'};
//char input[4] = {0}; 
//unsigned int curVal = 1;
//int it = 0;
//int nothing[] = {0,0,0,0,0,0,1};
//
//Keypad myPad = Keypad(makeKeymap(Keys), rowPin, colPin, row, col);
//
//void setup(){
//  for(int i = 0; i < 4; i++){
//    pinMode(Gpins[i], OUTPUT);
//  }
//  for(int i = 0; i < 7; i++){
//    pinMode(led[i], OUTPUT);
//  }
//  sethigh();
//  
//  Serial.begin(9600);
//  Serial.println("Enter some numbers");
//
//  Displayno();
//}
//
//bool compare(){
//  bool result = true;
//  
//  for(int i = 0; i < 4; i++){
//    if(input[i] == pin[i]){
//      result = true;
//    }else{
//      result = false;
//      break;
//    }
//  }
//
//  return result;
//}
//
//void sethigh(){
//  for(int i = 0; i < 4; i++){
//  digitalWrite(Gpins[i], HIGH);
//  }
//}
//
//void Display(int num, char val){
//  sethigh();
//  val = val - '0';
//
//  switch(num){
//    case 1: digitalWrite(Gpins[0], LOW); break;
//    case 2: digitalWrite(Gpins[1], LOW); break;
//    case 3: digitalWrite(Gpins[2], LOW); break;
//    case 4: digitalWrite(Gpins[3], LOW); break;
//  }
//
//  if(val >= 0 && val <= 9){
//    const int *numb = number[val];
//    for(int i = 0; i < 7; i++){
//      digitalWrite(led[i], numb[i]);
//    }
//  }else{
//    for(int i = 0; i < 7; i++){
//      digitalWrite(led[i], LOW);
//    }
//  }
//}
//
//void insert(char val){
//  if(it == 4){Serial.print(" Enough ");val = '\0'; return;}
//  Serial.print(val);
//  input[it] = val;
//
//  it++;
//  Enter1();
//}
//
//void Enter(char val){
//  Serial.println(val);
//
//  int arrLen = sizeof(input)/sizeof(input[0]);
//  
//    for(int i = 0; i < 150; i++){
//      for(int j = 0; j < arrLen; j++){
//        Display(j+1, input[j]);
//        delay(del);
//      }
//    }
//
//  bool resulet = compare();
//  Effect(resulet);
//  Delete();
//  Displayno();
//}
//
//void Enter1(){
//  int arrLen = sizeof(input)/sizeof(input[0]);
//  for(int i = 0; i < 10; i++){
//    for(int j = 0; j < arrLen; j++){
//      Display(j+1, input[j]);
//      delay(del);
//    }
//  }
//  Displayno();
//}
//
//void Displayno(){
//  for(int i = 0; i <4; i++){
//    digitalWrite(Gpins[i], LOW);
//  }
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], nothing[i]);
//  }
//}
//
//void Delete(){
//  Serial.println();
//  for(int i = 0; i < 4; i++){
//    input[i] = '\0';
//  }
//  sethigh();
//  Displayno();
//  it = 0;
//}
//
//void Delete1(char val){
//  if(it == 0){ val = '\0'; return;}
//  it--;
//  Serial.println(val);
//  input[it] = '\0';
//  for(int i= 0; i < it; i++){
//    Serial.print(input[i]);
//  }
//}
//
//void UP(int num, int val, bool val2){
//  sethigh();
//  
//  switch(num){
//    case 1: digitalWrite(Gpins[0], LOW); break;
//    case 2: digitalWrite(Gpins[1], LOW); break;
//    case 3: digitalWrite(Gpins[2], LOW); break;
//    case 4: digitalWrite(Gpins[3], LOW); break;
//  }
//
//  const int* numbe;
//
//  if(val2){
//    numbe = up2[val];
//  }else{
//    numbe = up1[val];
//  }
//  
//    for(int j = 0; j < 7; j++){
//      digitalWrite(led[j], numbe[j]);
//    }
//  delay(del);
//}
//
//void DOWN(int num, int val, bool val2){
//  sethigh();
//  
//  switch(num){
//    case 1: digitalWrite(Gpins[0], LOW); break;
//    case 2: digitalWrite(Gpins[1], LOW); break;
//    case 3: digitalWrite(Gpins[2], LOW); break;
//    case 4: digitalWrite(Gpins[3], LOW); break;
//  }
//
//  const int* numbe;
//  
//  if(val2){
//    numbe = down2[val];
//  }else{
//    numbe = down1[val];
//  }
//    for(int j = 0; j < 7; j++){
//      digitalWrite(led[j], numbe[j]);
//      
//  }
//  delay(del);
//}
//
//void Effect(bool val){
//  int value = 1;
//  int value2 = 1;
//
//  for(int j = 0; j < 2; j++){
//    for(int i = 0; i < 100; i++){
//      UP(value, value-1, val);
//      value = (value%4) +1;
//    }
//    for(int i = 0; i < 100; i++){
//      DOWN(value2, value2-1, val);
//      value2 = (value2%4) +1;
//    }
//  }
//  for(int i = 0; i < 100; i++){
//    UP(value, value-1, val);
//    value = (value%4) +1;
//  }
//}
//void loop(){
//  char inp = myPad.getKey();
//  int arrLen = sizeof(input)/sizeof(input[0]);
//
//  if(inp){
//    if(inp == 'x'){
//      Delete1(inp);
//    }else if(inp == '>'){
//              Enter(inp);
//          }else{
//      insert(inp);
//    }
//  }
//}
