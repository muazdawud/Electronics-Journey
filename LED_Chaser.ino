
int led[] = {6, 7, 8, 9, 10, 11, 12, 13};
int del = 50;
int bigdel = 1000;
int mloopdel = 150;

void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < 8; i++){
  pinMode(led[i], OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i < 3; i++){
  nloop();
}
delay(bigdel);
for(int i = 0; i < 3; i++){
  mloop();
}
}

void nloop() {
  for(int i = 0; i < 8; i++){
  digitalWrite(led[i], HIGH);
  delay(del);
  digitalWrite(led[i], LOW);
}
//delay(bigdel);
//for(int i = 0; i < 8; i++){
  
  //delay(del);
//}
}

void mloop() {
  for(int i = 0; i < 8; i++){
  digitalWrite(led[i], HIGH);
  delay(del);
  digitalWrite(led[i], LOW);
  
}
//delay(bigdel);
//for(int i = 0; i < 8; i++){
  //delay(del);
//}
//delay(bigdel);
}
