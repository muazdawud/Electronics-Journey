#include<Keypad.h>

const byte row = 4;
const byte col = 4;

char Key[row][col] = {
  {'1', '2', '3', 'C'},
  {'4', '5', '6', '+'},
  {'7', '8', '9', '-'},
  {'0', '/', 'x', '='},
};

byte rowpin[row] = {6, 7, 8, 9};
byte colpin[col] = {5, 4, 3, 2};

Keypad myPad = Keypad(makeKeymap(Key), rowpin, colpin, row, col);

char arr[5];
int i = 0;
double num = -1LL;

char cont[5];
int j = 0;
double ber = -1LL;

char sign = '\0';

double result = -1LL;

void setnum1(char val){
  if(val == '+' || val == '-' || val == '/' || val == 'x'){
    num = atol(arr);
    Serial.println();
    setsign(val);
    
    return;
  }
  if(val == '='){
    num = atol(arr);
    Serial.println();
    Serial.println(num);
    val = '\0';
    return;
  }
  if(i == 5){
    Serial.print("\tEnough");
    val = '\0';
    return;
  }
  
  arr[i] = val;

  Serial.print(val);
  
  ++i;
}

void setnum2(char val){
  if(val == '+' || val == '-' || val == '/' || val == 'x'){
    return;
  }

  if(val == '='){
    ber = atol(cont);
    Serial.println();
    output();
    return;
  }

  if(j == 5){
    val = '\0';    
    return;
  }

  cont[j] = val;

  Serial.print(val);
  
  ++j;
}

void setsign(char val){  
  sign = val;
  Serial.println(sign);
}

void output(){
  if(sign == '+'){
    result = num+ber;
  }else if(sign == '-'){
    result = num-ber;
  }else if(sign == '/'){
    result = num/ber;
  }else if(sign == 'x'){
    result = num*ber;
  }
  char operation = sign;
  displayres(operation);
}

void displayres(char operation){
  if(operation == '/'){
    Serial.println();
    Serial.print(num, 4);
    Serial.print(" ");
    Serial.print(sign);
    Serial.print(" ");
    Serial.print(ber, 4);
    Serial.print(" = ");
    Serial.println(result, 4);  
  }else{
    Serial.println();
    Serial.print(num, 0);
    Serial.print(" ");
    Serial.print(sign);
    Serial.print(" ");
    Serial.print(ber, 0);
    Serial.print(" = ");
    Serial.println(result, 0);
  }  
  Serial.println("------------------END----------------");
}

void kill(char *val){
  Serial.println(*val);
  for(int k = 0; k < 5; k++){
    arr[k] = '\0';
  }

  num = -1L;
  i = 0;

  for(int k = 0; k < 5; k++){
    cont[k] = '\0';
  }
  
  
  ber = -1L;
  j = 0;

  sign = '\0';
  
  result = -1L;

  *val = '\0';
}

void setup(){
  Serial.begin(9600);
}

void loop(){
  char val = myPad.getKey();

  if(val){
    if(val == 'C'){
      kill(&val);
    }
  }
  
  if(val){
    if(val != 'C'){
      if(num == -1L && sign == '\0'){
        setnum1(val);
      }
      
      if(sign != '\0'){
        if(ber == -1L){
          setnum2(val);
        }
      }
    }
  }
}
