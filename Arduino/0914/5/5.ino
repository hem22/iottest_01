#define SW 5
unsigned int Sign;
unsigned char Sign_Flag;
unsigned char SW_Count=0;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(SW,INPUT);
}

void First_LED(void) {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}
void Second_LED(void){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}
void Third_LED(void){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}

void loop(){
  Sign = digitalRead(SW);
  if((Sign == HIGH) && (Sign_Flag == 0))
  {
    Sign_Flag = 1;
    SW_Count++;
    SW_Count = (SW_Count%3);
  }
  if(digitalRead(SW) == LOW){
    Sign_Flag = 0;
  }

  switch(SW_Count)
  {
    case 0:
    First_LED();
    break;
    case 1:
    Second_LED();
    break;
    case 2:
    Third_LED();
    break;
    default:
    break;
  }
}

