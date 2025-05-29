////Bouncing Ball Effect
//
//int led[] = {6, 7, 8, 9, 10, 11, 12, 13};
//int del = 50;
//int sdel = 100;
//int cont = 8;
//
//void setup() {
//  for(int i = 0; i < cont; i++){
//    pinMode(led[i], OUTPUT);
//  }
//}
//
//void loop() {
//  
//  for(int i = 0; i < cont; i++){
//    digitalWrite(led[i], HIGH);
//    delay(del);
//  }
//  
//  delay(sdel);
//  
//  int m = 0;
//  m = cont-1;
//  
//  for(int i = m; i >= 0; i--){
//    digitalWrite(led[i], LOW);
//    delay(del);
//  }
//  
//  delay(sdel);
//  
//  cont--;
//  if(cont == 0){cont = 8;}
//  
//}
