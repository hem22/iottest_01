
void setup() {
 
  pinMode(9, OUTPUT);
 
}

void loop() {

for(int i=0 ; i<5 ; i++){

  for (int brightness = 0; brightness <=255; brightness++) {
      
  
      analogWrite(9, brightness);
      delay(5);

      }}
      
      delay(3000);
}

