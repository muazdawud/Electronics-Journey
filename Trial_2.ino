////int Gpins[4] = {15, 16, 17, 18};
////
////int led[] = {9, 10, 11, 12, 13, 14, 19};
////
////int del = 5;
////
////int num[10][7] = {
////{1,1,1,1,1,1,0},
////{0,1,1,0,0,0,0},
////{1,1,0,1,1,0,1},
////{1,1,1,1,0,0,1},
////{0,1,1,0,0,1,1},
////{1,0,1,1,0,1,1},
////{1,0,1,1,1,1,1},
////{1,1,1,0,0,0,0},
////{1,1,1,1,1,1,1},
////{1,1,1,1,0,1,1}
////};
////
////int input[] = {1, 2, 3, 4};
////
////void setup(){
////  for(int i = 0; i < 4; i++){
////  pinMode(Gpins[i], OUTPUT);
////  }
////}
////
////void sethigh(){
////  for(int i = 0; i < 4; i++){
////  digitalWrite(Gpins[i], HIGH);
////  }
////}
////
////void Display(int gnd, int numb){
////  sethigh();
////
////  switch(gnd){
////    case 1: digitalWrite(Gpins[gnd], LOW); break;
////    case 2: digitalWrite(Gpins[gnd], LOW); break;
////    case 3: digitalWrite(Gpins[gnd], LOW); break;
////    case 4: digitalWrite(Gpins[gnd], LOW); break;
////  }
////
////  const int* number = num[numb];
////  for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], number[i]);
////    delay(del);
////  }
////}
////
////void loop(){
//////    int GND = 1;
//////    int val = 0; 
////  int arrLen = sizeof(input)/sizeof(input[0]);
////  for(int i = 0; i < 150; i++){
////    for(int j = 0; j < arrLen; j++){
////        Display(j+1, input[j]);
////        delay(del);
////    }
////  }
////  
////
//////    Display(GND, val);
//////    val++;
//////    GND = GND%4 + 1;
//////    Display(GND, val);
//////    val++;
//////    GND = GND%4 + 1;
//////    Display(GND, val);
//////    val++;
//////    GND = GND%4 + 1;
//////    Display(GND, val);
//////    val++;
//////    GND = GND%4 + 1;
//////    
//////    val = val%9;
////}
//
//
//int Gpins[4] = {15, 16, 17, 18};
//
//int led[] = {9, 10, 11, 12, 13, 14, 19};
//
//int del = 3;
//
//
////int Gen2 = 0;
//
//int up[4][7] = {
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1},
//  {1, 1, 0, 0, 0, 1, 1}
//};
//
//int down[4][7] = {
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1},
//  {0, 0, 1, 1, 1, 0, 1}
//};
//
//void setup(){
//  for(int i = 0; i < 4; i++){
//    pinMode(Gpins[i], OUTPUT);
//  }
//  for(int i = 0; i < 7; i++){
//    pinMode(led[i], OUTPUT);
//  }
//
//  sethigh();
//
//  Serial.begin(9600);
//}
//
//void sethigh(){
//  for(int i = 0; i < 4; i++){
//    digitalWrite(Gpins[i], HIGH);
//  }
//}
//
//void UP(int num, int val){
//  sethigh();
//  
//  switch(num){
//    case 1: digitalWrite(Gpins[0], LOW); break;
//    case 2: digitalWrite(Gpins[1], LOW); break;
//    case 3: digitalWrite(Gpins[2], LOW); break;
//    case 4: digitalWrite(Gpins[3], LOW); break;
//  }
//
//  const int* number = up[val];
//    
//    for(int j = 0; j < 7; j++){
//      digitalWrite(led[j], number[j]);
//    }
//  delay(del);
//}
//
//void DOWN(int num, int val){
//  sethigh();
//  
//  switch(num){
//    case 1: digitalWrite(Gpins[0], LOW); break;
//    case 2: digitalWrite(Gpins[1], LOW); break;
//    case 3: digitalWrite(Gpins[2], LOW); break;
//    case 4: digitalWrite(Gpins[3], LOW); break;
//  }
//
//  const int* number = down[val];
//  
//    for(int j = 0; j < 7; j++){
//      digitalWrite(led[j], number[j]);
//      
//  }
//  delay(del);
//}
//
//void loop(){
//  int value = 1;
//  int value2 = 1;
//
//  for(int j = 0; j < 5; j++){
//    for(int i = 0; i < 100; i++){
//      UP(value, value-1);
//      value = (value%4) +1;
//    }
//    for(int i = 0; i < 100; i++){
//      DOWN(value2, value2-1);
//      value2 = (value2%4) +1;
//    }
//  }
//  for(int i = 0; i < 100; i++){
//    UP(value, value-1);
//    value = (value%4) +1;
//  }
//  
//  sethigh();
//  value = 1;
//  value2 = 1;
//  
//  
//  delay(1500);
//}
