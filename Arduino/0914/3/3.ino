char buff[64];

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    while(Serial.available()>0)       // 읽을것이 있는지 확인
    {
      Serial.readBytes(buff,64);      // 64바이트를 읽어옴
      
      }
   
    if (strcmp(buff,"off") == 0){          //입력한 문자열이 off와 같음?
       digitalWrite(LED_BUILTIN, LOW);
      }
      
    if (String(buff)equals("off") == 0){    //입력한 문자열이 on와 같음?
       digitalWrite(LED_BUILTIN, HIGH);
      }
      
    memset(buff, 0, sizeof(buff));       // buff안의 모든 숫자를 0으로 채운다 
                                         // 메모리셋의 약자 sizeof

}
