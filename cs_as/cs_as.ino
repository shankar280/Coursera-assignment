

void setup() {
  
 Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  int p=analogRead(A0);
  if(p<=1000){
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println(p);
  delay(100);
  
  }
  if(p>1000){              
 
  digitalWrite(LED_BUILTIN, HIGH);
  
    Serial.println(p);
  delay(100);                    
}
}
