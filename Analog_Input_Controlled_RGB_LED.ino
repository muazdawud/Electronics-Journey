//int RLED = 8;
//int GLED = 9;
//int BLED = 10;
//int POT = 0;
//int val, inp;
//int LOWER = 100;
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
//    digitalWrite(BLED, HIGH);
//  }else if(val > UPPER){
//    digitalWrite(RLED, HIGH);
//    digitalWrite(GLED, LOW);
//    digitalWrite(BLED, LOW);
//  }else{
//    digitalWrite(RLED, LOW);
//    digitalWrite(GLED, HIGH);
//    digitalWrite(BLED, LOW);
//  }
//}
