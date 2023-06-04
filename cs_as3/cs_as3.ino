#include<Arduino.h>
#include<EEPROM>
int addr, val;
byte value;
String readString = "";
void setup()
{
  Serial.begin(9600);
  Serial.println("Digit read + address or write + address + value");
}
void loop(){
  while (Serial.available()){
    readString = Serial.readString();
  }
  if (readString.startswith("Read")){
    addr = readString.substring(5).toInt();
    Serial.print("your address is:");
    Serial.println(addr);
    Serial.println();
    value=EEPROM.read(addr);
    Serial.print("EEPROM read:");
    Serial.println(value);
    
  } if(readString.startswith("Write")){
    addr=readString.substring(6).toInt();
    val=readString.substring(8).toInt();
    Serial.println(addr);
    Serial.print("new value is");
    Serial.println(val);
    EEPROM.write(addr, val);
    
  }
  readString="";
}

