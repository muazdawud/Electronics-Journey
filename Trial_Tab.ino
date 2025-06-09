//#define GND1 6
//#define GND2 8
//#define GND3 9
//#define GND4 12
//#define POT 0
//
//int led[] = {11, 7, 4, 2, 3, 10, 5};
//
//int digits[10][7] = {
//  {1, 1, 1, 1, 1, 1, 0}, // 0
//  {0, 1, 1, 0, 0, 0, 0}, // 1
//  {1, 1, 0, 1, 1, 0, 1}, // 2
//  {1, 1, 1, 1, 0, 0, 1}, // 3
//  {0, 1, 1, 0, 0, 1, 1}, // 4
//  {1, 0, 1, 1, 0, 1, 1}, // 5
//  {1, 0, 1, 1, 1, 1, 1}, // 6
//  {1, 1, 1, 0, 0, 0, 0}, // 7
//  {1, 1, 1, 1, 1, 1, 1}, // 8
//  {1, 1, 1, 1, 0, 1, 1}  // 9
//};
//int del = 1;
//
//int displayDigit[4];
//
//void setup() {
//  for(int i = 0; i < 7; i++){
//    pinMode(led[i], OUTPUT);
//  }
//
//  pinMode(GND1, OUTPUT);
//  pinMode(GND2, OUTPUT);
//  pinMode(GND3, OUTPUT);
//  pinMode(GND4, OUTPUT);
//
//  digitalWrite(GND1, HIGH);
//  digitalWrite(GND2, HIGH);
//  digitalWrite(GND3, HIGH);
//  digitalWrite(GND4, HIGH);
//
//  Serial.begin(9600);
//  Serial.println("Enter a number between 0-10000");
//}
//
//void displayDigits(int digit, int number){
//  digitalWrite(GND1, HIGH);
//  digitalWrite(GND2, HIGH);
//  digitalWrite(GND3, HIGH);
//  digitalWrite(GND4, HIGH);
//  
//  switch(digit){
//    case 1: digitalWrite(GND1, LOW); break;
//    case 2: digitalWrite(GND2, LOW); break;
//    case 3: digitalWrite(GND3, LOW); break;
//    case 4: digitalWrite(GND4, LOW); break;
//  }
//
//  if(number >= 0 && number <= 9){
//    const int *pattern = digits[number];
//    for(int i = 0; i < 7; i++) {
//      digitalWrite(led[i], pattern[i]);
//    }
//  }else{
//    for(int i = 0; i < 7; i++) {
//      digitalWrite(led[i], LOW);
//    }
//  }
//}
//
//void arrange(int num){
//  displayDigit[0] = num % 10;
//  displayDigit[1] = (num/10) % 10;
//  displayDigit[2] = (num/100) % 10;
//  displayDigit[3] = (num/1000) % 10;
//}
//
//void loop(){
//  static int currentDigit = 1;
//  static unsigned long lastUpdate = 0;
//  int num = analogRead(POT);
//  num *= 5;
//  int n = num%100;
//  num -= n;
//  arrange(num);
//
//  Serial.println(num);
//
////  if(Serial.available() > 0){
////    int num = Serial.parseInt();
////    while(Serial.available()) Serial.read();
////
////    if(num >= 0 && num < 10000){
////      arrange(num);
////      Serial.print("Displaying: ");
////      Serial.println(num);
////    }else{
////      Serial.println("Invalid input!!");
////    }
////  }
//
//  if(millis() - lastUpdate >= del) {
//    displayDigits(currentDigit, displayDigit[currentDigit-1]);
//    currentDigit = (currentDigit % 4) + 1;
//    lastUpdate = millis();
//  }
//}
