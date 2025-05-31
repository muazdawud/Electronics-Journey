// Project 16 – Creating an LED Binary Number Display
#define DATA 6 // digital 6 to pin 14 on the 74HC595
#define LATCH 8 // digital 8 to pin 12 on the 74HC595
#define CLOCK 10 // digital 10 to pin 11 on the 74HC595
int del = 500;

void setup()
{
 pinMode(LATCH, OUTPUT);
 pinMode(CLOCK, OUTPUT);
 pinMode(DATA, OUTPUT);
}
void loop()
{
 int i;
 for ( i = 0; i < 256; i++ )
 {
 digitalWrite(LATCH, LOW);
 shiftOut(DATA, CLOCK, MSBFIRST, i);
 digitalWrite(LATCH, HIGH);
 delay(del);
 }
}

////You can comment the upper code and uncomment this one to see a wonder;
//
//#define DATA 6 // digital 6 to pin 14 on the 74HC595
//#define LATCH 8 // digital 8 to pin 12 on the 74HC595
//#define CLOCK 10 // digital 10 to pin 11 on the 74HC595
//int del = 500;
//
//void setup()
//{
// pinMode(LATCH, OUTPUT);
// pinMode(CLOCK, OUTPUT);
// pinMode(DATA, OUTPUT);
//}
//void loop()
//{
//  int a  = B10101010;
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, MSBFIRST, a);
//  digitalWrite(LATCH, HIGH);
//
//  delay(1000);
//
//  int b = B01010101;
//  digitalWrite(LATCH, LOW);
//  shiftOut(DATA, CLOCK, MSBFIRST, b);
//  digitalWrite(LATCH, HIGH);
//
//  delay(1000);
//}
