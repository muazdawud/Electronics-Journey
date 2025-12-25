//#include <SPI.h>
//#include <MFRC522.h>
//#include <LiquidCrystal_I2C.h>
// 
//#define SS_PIN 10
//#define RST_PIN 9
//#define B_PIN 2
//
//int disp_delay = 4000;
//int delay1 = 1000;
//String accessName = "Oga Adamu";
//
//MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
//LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
// 
//void setup(){
//  lcd.init(); // initialize the lcd
//  lcd.backlight(); // Turn backlight On
//  display1();
//  SPI.begin();      // Initiate  SPI bus
//  mfrc522.PCD_Init();   // Initiate MFRC522
//  delay(4);
//}
//
//void display_Success(){
//  lcd.clear();
//  lcd.setCursor(0, 0); // Set cursor at position zero(0) on first line of 1602 LCD
//  lcd.print("Name: ");
//  lcd.setCursor(6, 0);
//  lcd.print(accessName); // First line of LCD
//  lcd.setCursor(1, 1); // Set cursor at position zero (0) on second line of 1602 LCD
//  lcd.print("Access Granted"); // Second line of LCD
//  delay(disp_delay); // Delay one second
//  display1();
//}
//
//void display1(){
//  lcd.clear();
//  lcd.setCursor(2, 0);
//  lcd.print("Scan A Card");
//}
//
//void display_fail(){
//  lcd.clear();
//  lcd.setCursor(2, 0);
//  lcd.print("Unauthorized");
//  lcd.setCursor(5, 1);
//  lcd.print("Card!");
//  delay(disp_delay);
//  display1();
//}
//
//void loop(){
//  if (!mfrc522.PICC_IsNewCardPresent()){
//    return;
//  }
//  
//  if (!mfrc522.PICC_ReadCardSerial()){
//    return;
//  }
//  
//  String content= "";
//  byte letter;
//  for (byte i = 0; i < mfrc522.uid.size; i++){
//     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
//     content.concat(String(mfrc522.uid.uidByte[i], HEX));
//  }
//  
//  content.toUpperCase();
//  if (content.substring(1) == "59 95 43 A3"){
//    display_Success();
//  }else{
//    display_fail();
//  }
//}
