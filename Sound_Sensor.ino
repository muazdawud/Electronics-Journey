//#define led1 2
//#define led2 3
//#define led3 4
//#define led4 5
//#define led5 6
//#define led6 7
//#define led7 8
//#define sensor A0
//
//bool led1Status = 0;
//bool led2Status = 0;
//bool led3Status = 0;
//bool led4Status = 0;
//bool led5Status = 0;
//bool led6Status = 0;
//bool led7Status = 0;
//
//
//int del = 200;
//int sdel = 20;
//int bdel = 20;
//
//void setup(){
//  pinMode(led1, OUTPUT);
//  pinMode(led2, OUTPUT);
//  pinMode(led3, OUTPUT);
//  pinMode(led4, OUTPUT);
//  pinMode(led5, OUTPUT);
//  pinMode(led6, OUTPUT);
//  pinMode(led7, OUTPUT);
//  pinMode(sensor, INPUT);
//
//  Serial.begin(9600);
//}
//
//void loop(){
//  int sensorValue = analogRead(sensor);
//  Serial.println(sensorValue);
//
//  if(sensorValue >= 58){
//    led1Status = 1;
//  }
//  if(sensorValue >= 62){
//    led2Status = 1;
//  }
//  if(sensorValue >= 63){
//    led3Status = 1;
//  }
//  if(sensorValue >= 64){
//    led4Status = 1;
//  }
//  if(sensorValue >= 65){
//    led5Status = 1;
//  }
//  if(sensorValue >= 66){
//    led6Status = 1;
//  }
//  if(sensorValue >= 68){
//    led7Status = 1;
//  }
//  
//  if(led1Status == 1 || led2Status == 1 || led3Status == 1 || led4Status == 1 || led5Status == 1 || led6Status == 1 || led7Status == 1){
//    if(sensorValue >= 58 || sensorValue < 40){
//      
//      digitalWrite(led1, HIGH);
//    }
//    if(sensorValue >= 61 || sensorValue < 39){
//      
//      digitalWrite(led2, HIGH);
//    }
//    if(sensorValue >= 63 || sensorValue < 38){
//     
//      digitalWrite(led3, HIGH);
//    }
//    if(sensorValue >= 64 || sensorValue < 37){
//      
//      digitalWrite(led4, HIGH);
//    }
//    if(sensorValue >= 65 || sensorValue < 36){
//      
//      digitalWrite(led5, HIGH);
//    }
//    if(sensorValue >= 66 || sensorValue < 36){
//      
//      digitalWrite(led6, HIGH);
//    }
//    if(sensorValue >= 68 || sensorValue < 36){
//      
//      digitalWrite(led7, HIGH);
//    }
//        
//    delay(del);
//    led7Status = 0;
//    led6Status = 0;
//    led5Status = 0;
//    led4Status = 0;
//    led3Status = 0;
//    led2Status = 0;
//    led1Status = 0;
//  }
//
//  if(! (sensorValue >= 68 || sensorValue < 35)){
//    delay(sdel);
//    digitalWrite(led7, LOW);
//  }
//  if(! (sensorValue >= 66 || sensorValue < 36)){
//    delay(sdel);
//    digitalWrite(led6, LOW);
//  }
//  if(! (sensorValue >= 65 || sensorValue < 37)){
//    delay(sdel);
//    digitalWrite(led5, LOW);
//  }
//  if(! (sensorValue >= 64 || sensorValue < 38)){
//    delay(sdel);
//    digitalWrite(led4, LOW);
//  }
//  if(! (sensorValue >= 63 || sensorValue < 39)){
//    delay(sdel);
//    digitalWrite(led3, LOW);
//  }
//  if(! (sensorValue >= 62 || sensorValue < 39)){
//    delay(sdel);
//    digitalWrite(led2, LOW);
//  }
//  if(! (sensorValue >= 58 || sensorValue < 40)){
//    delay(sdel);
//    digitalWrite(led1, LOW);
//  }
//}


//#define led1 2
//#define led2 3
//#define led3 4
//#define led4 5
//#define led5 6
//#define led6 7
//#define led7 8
//#define sensor A0
//
//int del =  200;
//int sdel = 10;
//int mini = 1;
//int maxi = 14;
//
//void setup(){
//  pinMode(led1, OUTPUT);
//  pinMode(led2, OUTPUT);
//  pinMode(led3, OUTPUT);
//  pinMode(led4, OUTPUT);
//  pinMode(led5, OUTPUT);
//  pinMode(led6, OUTPUT);
//  pinMode(led7, OUTPUT);
//  pinMode(sensor, INPUT);
//
//  Serial.begin(9600);
//}
//
//void loop(){
//  int input = analogRead(sensor);
//  input = map(input, 54, 150, mini, maxi);
//
//  if(input >= 1){
//    digitalWrite(led1, HIGH);
//  }
//  if(input >= 2){
//    digitalWrite(led2, HIGH);
//  }
//  if(input >= 3){
//    digitalWrite(led3, HIGH);
//  }
//  if(input >= 4){
//    digitalWrite(led4, HIGH);
//  }
//  if(input >= 6){
//    digitalWrite(led5, HIGH);
//  }
//  if(input >= 10){
//    digitalWrite(led6, HIGH);
//  }
//  if(input >= 14){
//    digitalWrite(led7, HIGH);
//  }
//
//  delay(del);
//
//  Serial.println(input);
//  
//  if(!(input >= 14)){
//    digitalWrite(led7, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 10)){
//    digitalWrite(led6, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 6)){
//    digitalWrite(led5, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 4)){
//    digitalWrite(led4, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 3)){
//    digitalWrite(led3, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 2)){
//    digitalWrite(led2, LOW);
//    delay(sdel);
//  }
//  if(!(input >= 1)){
//    digitalWrite(led1, LOW);
//    delay(sdel);
//  }
//} 
//  
