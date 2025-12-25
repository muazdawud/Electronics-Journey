////#include <IRremote.hpp>
////#define IR_RECEIVE_PIN 2
////
////void setup()
////{
////  Serial.begin(115200); // // Establish serial communication
////  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
////}
////
////void loop() {
////  if (IrReceiver.decode()) {
////      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
////      IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
////      IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
////      IrReceiver.resume(); // Enable receiving of the next value
////  }
////}
//
//#include <LiquidCrystal_I2C.h> // See text
//
//LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
//
//int delay1 = 1000;
//
//void setup()
//
//{
//
//lcd.init(); // initialize the lcd
//
//lcd.backlight(); // Turn backlight On
//
//}
//
//void loop()
//
//{
//
//lcd.setCursor(0, 0); // Set cursor at position zero(0) on first line of 1602 LCD
//
//lcd.print("Who Are You?"); // First line of LCD
//
//lcd.setCursor(0, 1); // Set cursor at position zero (0) on second line of 1602 LCD
//
//lcd.print("This is 2nd Line"); // Second line of LCD
//
//delay(delay1); // Delay one second
//
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
