// Project 1 - LED Flasher
int ledPin = 10;
void setup() {
 pinMode(ledPin, OUTPUT);
}
void loop() {
//3 dits
 for (int x=0; x<3; x++) {
 digitalWrite(ledPin, HIGH); // sets the LED on
 delay(150); // waits for 150ms
 digitalWrite(ledPin, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }

 // 100ms delay to cause slight gap between letters
 delay(100);
 // 3 dahs
 for (int x=0; x<3; x++) {
 digitalWrite(ledPin, HIGH); // sets the LED on
 delay(400); // waits for 400ms
 digitalWrite(ledPin, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }
 // 100ms delay to cause slight gap between letters
 delay(100);

 // 3 dits again
 for (int x=0; x<3; x++) {
 digitalWrite(ledPin, HIGH); // sets the LED on
 delay(150); // waits for 150ms
 digitalWrite(ledPin, LOW); // sets the LED off
 delay(100); // waits for 100ms
 }

 // wait 5 seconds before repeating the SOS signal
 delay(5000);
}
