//Exercise 2: Make a bouncing ball effect by turning the LEDs so that they are vertical. Then make
//an LED start at the bottom, then “bounce” up to the top LED, then back to the bottom; then next
//time, have it “bounce” only up to the 9th LED, then back down, then up to the 8th, etc., to simulate
//a bouncing ball losing momentum after each bounce.

//Project 7: Bouncing Ball Effect

int led[] = {6, 7, 8, 9, 10, 11, 12, 13};
int del = 65;
int bigdel = 1000;

void setup() {
  for(int i = 0; i < 8; i++){
    pinMode(led[i], OUTPUT);
  }
}

//void loop(){
//  for(int i = 0; i < 8; i++){
//    int val = 8;
//    for(int i = 0; i < val; i++){
//      digitalWrite(led[i], HIGH);
//      delay(del);
//      digitalWrite(led[i], LOW);
//    }
//    digitalWrite(led[i], LOW);
//    val--;
//    }
//}

void loop() {
  for( ; ; ){
  int x = 8;
  while(x >= 0){ 
  for(int i = 0; i < x; i++){
    digitalWrite(led[i], HIGH);
    delay(del);
  }
  x--;
  }
  while(x >= 0){
  for(int i = x; i >= 0; i++){
    digitalWrite(led[i], LOW);
    delay(del);
  }
  x--;
  }
  if(x == 0){
    for(int i = 0; i < x; i++){
    digitalWrite(led[i], HIGH);
    delay(del);
    }
  }else{
    continue;
  }
  delay(bigdel);
  for(int i = 0; i < x; i++){
    digitalWrite(led[i], LOW);
    delay(del);
  }
  }
}
