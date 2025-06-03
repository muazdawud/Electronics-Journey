//int RLED = 11;
//int GLED = 10;
//int BLED = 9;
//int POT = 0;
//int val, inp;
//int LOWER = 120;
//int UPPER = 180;
//
//void setup(){
//  pinMode(RLED, OUTPUT);
//  pinMode(GLED, OUTPUT);
//  pinMode(BLED, OUTPUT);
//}
//
//void loop(){
//  inp = analogRead(POT);
//  val = inp/4;
//  if(val < LOWER){
//    digitalWrite(RLED, LOW);
//    digitalWrite(GLED, LOW);
//    digitalWrite(BLED, val);
//  }else if(val > UPPER){
//    digitalWrite(RLED, val);
//    digitalWrite(GLED, LOW);
//    digitalWrite(BLED, LOW);
//  }else{
//    digitalWrite(RLED, LOW);
//    digitalWrite(GLED, val);
//    digitalWrite(BLED, LOW);
//  }
//}
