void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    String input="";
    while(Serial.available()>0)
    {
      input += (char)Serial.read();
      delay(50);
      }
    if (input == "on") 
    {
      digitalWrite(LED_BUILTIN, HIGH);
      }
    if(input == "off")
    {
      digitalWrite(LED_BUILTIN, LOW);
    }
  delay(300);
}
