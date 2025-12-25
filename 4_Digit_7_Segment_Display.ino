//#define GND1 6
//#define GND2 8
//#define GND3 9
//#define GND4 12
//
//int led[] = {11, 7, 4, 2, 1, 10, 5};
//
//int zer[] = {1, 1, 1, 1, 1, 1, 0};
//int one[] = {0, 1, 1, 0, 0, 0, 0};
//int two[] = {1, 1, 0, 1, 1, 0, 1};
//int thr[] = {1, 1, 1, 1, 0, 0, 1};
//int fou[] = {0, 1, 1, 0, 0, 1, 1};
//int fiv[] = {1, 0, 1, 1, 0, 1, 1};
//int six[] = {1, 0, 1, 1, 1, 1, 1};
//int sev[] = {1, 1, 1, 0, 0, 0, 0};
//int eig[] = {1, 1, 1, 1, 1, 1, 1};
//int nin[] = {1, 1, 1, 1, 0, 1, 1};
//
//int del = 1000;
//int del2 = 10000;
//long del3 = 100000;
//unsigned long del4 = 1000000;
//
//int val2 = 1;
//int val3 = 0;
//int val4 = 0;
//
//void setup() {
//  for(int i = 0; i < 7; i++){
//    pinMode(led[i], OUTPUT);
//  }
//  pinMode(GND1, OUTPUT);
//  pinMode(GND2, OUTPUT);
//  pinMode(GND3, OUTPUT);
//  pinMode(GND4, OUTPUT);
//  
//  digitalWrite(GND1, HIGH);
//  digitalWrite(GND2, HIGH);
//  digitalWrite(GND3, HIGH);
//  digitalWrite(GND4, HIGH);
//}
//
//void g1() {
//  digitalWrite(GND1, LOW);
//  
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], zer[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], one[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], two[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], thr[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], fou[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], fiv[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], six[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], sev[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], eig[i]);
//  }
//  delay(del);
//  for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], nin[i]);
//  }
//  delay(del);
//
//  g2();
//}
//
//void g2() {
//  if(val2 == 0){
//      digitalWrite(GND2, HIGH);
//  }else if(val2 == 1){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], one[i]);
//    }
//    
//  }else if(val2 == 2){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], two[i]);
//    }
//    
//  }else if(val2 == 3){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], thr[i]);
//    }
//    
//  }else if(val2 == 4){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], fou[i]);
//    }
//    
//  }else if(val2 == 5){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], fiv[i]);
//    }
//    
//  }else if(val2 == 6){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], six[i]);
//    }
//    
//  }else if(val2 == 7){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], sev[i]);
//    }
//    
//  }else if(val2 == 8){
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], eig[i]);
//    }
//    
//  }else{
//    digitalWrite(GND2, LOW);
//    for(int i = 0; i < 7; i++){
//    digitalWrite(led[i], nin[i]);
//    }
//    
//  }
//  
//}
//
////void g3() {
////  if(val3 == 0){
////    digitalWrite(GND3, HIGH);
////    delay(del3);
////  }else if(val3 == 1){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], one[i]);
////    }
////    delay(del3);
////  }else if(val3 == 2){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], two[i]);
////    }
////    delay(del3);
////  }else if(val3 == 3){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], thr[i]);
////    }
////    delay(del3);
////  }else if(val3 == 4){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], fou[i]);
////    }
////    delay(del3);
////  }else if(val3 == 5){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], fiv[i]);
////    }
////    delay(del3);
////  }else if(val3 == 6){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], six[i]);
////    }
////    delay(del3);
////  }else if(val3 == 7){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], sev[i]);
////    }
////    delay(del3);
////  }else if(val3 == 8){
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], eig[i]);
////    }
////    delay(del3);
////  }else{
////    digitalWrite(GND3, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], nin[i]);
////    }
////    delay(del3);
////    g4();
////  }
////
////  val3++;
////
////  if(val3 == 10){val3 = 0;}
////
////  g2();
////}
////void g4() {
////  if(val4 == 0){
////    digitalWrite(GND4, HIGH);
////    delay(del4);
////  }else if(val4 == 1){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], one[i]);
////    }
////    delay(del4);
////  }else if(val4 == 2){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], two[i]);
////    }
////    delay(del4);
////  }else if(val4 == 3){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], thr[i]);
////    }
////    delay(del4);
////  }else if(val4 == 4){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], fou[i]);
////    }
////    delay(del4);
////  }else if(val4 == 5){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], fiv[i]);
////    }
////    delay(del4);
////  }else if(val4 == 6){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], six[i]);
////    }
////    delay(del4);
////  }else if(val4 == 7){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], sev[i]);
////    }
////    delay(del4);
////  }else if(val4 == 8){
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], eig[i]);
////    }
////    delay(del4);
////  }else{
////    digitalWrite(GND4, LOW);
////    for(int i = 0; i < 7; i++){
////    digitalWrite(led[i], nin[i]);
////    }
////    delay(del4);
////    g4();
////  }
////  
////  val4++;
////  
////  if(val4 == 10){val4 = 0;
////  digitalWrite(GND1, HIGH);
////  digitalWrite(GND2, HIGH);
////  digitalWrite(GND3, HIGH);
////  digitalWrite(GND4, HIGH);
////  g1();}
////  else{g1();}
////}
//
//void loop() {
//  g1(); 
//  val2++;
//  if(val2 == 10){val2 = 0;}
//}
