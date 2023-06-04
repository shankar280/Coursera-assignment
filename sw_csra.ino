
int sw1=4;
int sw2=6;
void setup() {
 pinMode(sw1, INPUT);
 pinMode(sw2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  if(digitalRead(sw1)==0){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  }
  if(digitalRead(sw2)==0){              
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);  
  digitalWrite(LED_BUILTIN, LOW);                       
}
}
