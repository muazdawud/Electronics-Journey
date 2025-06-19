////#include<Keypad.h>
////
////const byte row = 4;
////const byte col = 4;
////
////char Key[row][col] = {
////  {'1', '2', '3', 'C'},
////  {'4', '5', '6', '+'},
////  {'7', '8', '9', '-'},
////  {'0', '/', 'x', '='},
////};
////
////byte rowpin[row] = {6, 7, 8, 9};
////byte colpin[col] = {5, 4, 3, 2};
////
////Keypad myPad = Keypad(makeKeymap(Key), rowpin, colpin, row, col);
////
////char arr[5];
////int i = 0;
////long num = -1;
////
////char arr2[4];
////int j = 0;
////long num2 = -1;
////
////char sign = '\0';
////
////void setnum1(char val){
////  if(val == '+' || val == '-' || val == '/' || val == 'x'){
////    num = atol(arr);
////    Serial.println();
////    setsign(val);
////    i = 0;
////    return;
////  }
////  if(i == 5){
////    num = atol(arr);
////    Serial.println();
////    Serial.println("Enough");
////    i = 0;
////    return;
////  }
////  
////  if(val == '0'){
////    arr[i] = val;
////  }else if(val == '1'){
////    arr[i] = val;
////  }else if(val == '2'){
////    arr[i] = val;
////  }else if(val == '3'){
////    arr[i] = val;
////  }else if(val == '4'){
////    arr[i] = val;
////  }else if(val == '5'){
////    arr[i] = val;
////  }else if(val == '6'){
////    arr[i] = val;
////  }else if(val == '7'){
////    arr[i] = val;
////  }else if(val == '8'){
////    arr[i] = val;
////  }else if(val == '9'){
////    arr[i] = val;
////  }
////
////  Serial.print(val);
////  
////  ++i;
////}
////
////void setnum2(char val){
////  if(val == '='){
////    num2 = atol(arr2);
////    Serial.println();
////    j = 0;
////    return;
////  }
////  if(j == 4){
////    num2 = atol(arr2);
////    j = 0;
////    return;
////  }
////
////  if(val == '0'){
////    arr2[j] = val;
////  }else if(val == '1'){
////    arr2[j] = val;
////  }else if(val == '2'){
////    arr2[j] = val;
////  }else if(val == '3'){
////    arr2[j] = val;
////  }else if(val == '4'){
////    arr2[j] = val;
////  }else if(val == '5'){
////    arr2[j] = val;
////  }else if(val == '6'){
////    arr2[j] = val;
////  }else if(val == '7'){
////    arr2[j] = val;
////  }else if(val == '8'){
////    arr2[j] = val;
////  }else if(val == '9'){
////    arr2[j] = val;
////  }
////
////  Serial.print(val);
////  
////  ++j;
////}
////
////void setsign(char val){
////  if(val != '='){
////    sign = val;
////    Serial.println();
////  }else{
////    return;
////  }
////}
////
////void output(char val){
////  long result;
////  
////  if(sign == '+'){
////    result = num+num2;
////  }else if(sign == '-'){
////    result = num-num2;
////  }else if(sign == '/'){
////    result = num/num2;
////  }else if(sign == 'x'){
////    result = num*num2;
////  }
////  displayres(val, result);
////
////  return;
////}
////
////void displayres(char val, long result){
////  Serial.println();
////  Serial.print(num);
////  Serial.print(" ");
////  Serial.print(sign);
////  Serial.print(" ");
////  Serial.print(num2);
////  Serial.print(" ");
////  Serial.print(val);
////  Serial.print(" ");
////  Serial.println(result);
////
////  return;
////}
////
////void setup(){
////  Serial.begin(9600);
////}
////
////void loop(){
////  char val = myPad.getKey();
////
////  if(val){
////    if(num == -1){
////      setnum1(val);
////      val = '\0';
////    }
////  }
////
////  if(val){
////    if(num != -1 && sign == '\0'){
////      setsign(val);
////    }
////  }
////
////  if(val){
////    if(sign != '\0'){
////      if(num2 == -1){
////        setnum2(val);
////        val = '\0';
////      }
////    }
////  }
////
////  if(val){
////    if(num != -1 && num2 != -1 && sign != '\0'){
////      if(val == '='){
////        output(val);
////        
////        for(int k = 0; k < 5; k++){
////            arr[k] = 0;
////        }
////        num = -1;
////    
////        for(int k = 0; k < 4; k++){
////            arr2[k] = 0;
////        }
////        num2 = -1;
////    
////        sign = '0';
////        Serial.println("------------------END----------------");
////      }
////    }
////  }
////}


//#include<Keypad.h>
//
//const byte row = 4;
//const byte col = 4;
//
//char Key[row][col] = {
//  {'1', '2', '3', 'C'},
//  {'4', '5', '6', '+'},
//  {'7', '8', '9', '-'},
//  {'0', '/', 'x', '='},
//};
//
//byte rowpin[row] = {6, 7, 8, 9};
//byte colpin[col] = {5, 4, 3, 2};
//
//Keypad myPad = Keypad(makeKeymap(Key), rowpin, colpin, row, col);
//
//char arr[5];
//int i = 0;
//double num = -1LL;
//
//char cont[5];
//int j = 0;
//double ber = -1LL;
//
//char sign = '\0';
//
//double result = -1LL;
//
//void setnum1(char val){
//  if(val == '+' || val == '-' || val == '/' || val == 'x'){
//    num = atof(arr);
//    Serial.println();
//    setsign(val);
//    
//    return;
//  }
//  if(val == '='){
//    num = atof(arr);
//    Serial.println();
//    Serial.println(num);
//    val = '\0';
//    return;
//  }
//  if(i == 5){
//    Serial.print("\tEnough");
//    val = '\0';
//    return;
//  }
//  
//  arr[i] = val;
//
//  Serial.print(val);
//  
//  ++i;
//}
//
//void setnum2(char val){
//  if(val == '+' || val == '-' || val == '/' || val == 'x'){
//    return;
//  }
//
//  if(val == '='){
//    ber = atof(cont);
//    Serial.println();
//    output();
//    return;
//  }
//
//  if(j == 5){
//    val = '\0';    
//    return;
//  }
//
//  cont[j] = val;
//
//  Serial.print(val);
//  
//  ++j;
//}
//
//void setsign(char val){  
//  sign = val;
//  Serial.println(sign);
//}
//
//void output(){
//  if(sign == '+'){
//    result = num+ber;
//  }else if(sign == '-'){
//    result = num-ber;
//  }else if(sign == '/'){
//    result = num/ber;
//  }else if(sign == 'x'){
//    result = num*ber;
//  }
//  char operation = sign;
//  displayres(operation);
//}
//
//void displayres(char operation){
//  if(operation == '/'){
//    Serial.println();
//    Serial.print(num, 3);
//    Serial.print(" ");
//    Serial.print(sign);
//    Serial.print(" ");
//    Serial.print(ber, 3);
//    Serial.print(" = ");
//    Serial.println(result, 3);  
//  }else{
//    Serial.println();
//    Serial.print(num, 0);
//    Serial.print(" ");
//    Serial.print(sign);
//    Serial.print(" ");
//    Serial.print(ber, 0);
//    Serial.print(" = ");
//    Serial.println(result, 0);
//  }  
//  Serial.println("------------------END----------------");
//}
//
//void kill(char *val){
//  Serial.println(*val);
//  for(int k = 0; k < 5; k++){
//    arr[k] = '\0';
//  }
//
//  num = -1L;
//  i = 0;
//
//  for(int k = 0; k < 5; k++){
//    cont[k] = '\0';
//  }
//  
//  
//  ber = -1L;
//  j = 0;
//
//  sign = '\0';
//  
//  result = -1L;
//
//  *val = '\0';
//}
//
//void setup(){
//  Serial.begin(9600);
//}
//
//void loop(){
//  char val = myPad.getKey();
//
//  if(val){
//    if(val == 'C'){
//      kill(&val);
//    }
//  }
//  if(val){
//    if(val != 'C'){
//      if(num == -1L && sign == '\0'){
//        setnum1(val);
//      }
//      
//      if(sign != '\0'){
//        if(ber == -1L){
//          setnum2(val);
//        }
//      }
//    }
//  }
//}
