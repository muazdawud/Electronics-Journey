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
//}
