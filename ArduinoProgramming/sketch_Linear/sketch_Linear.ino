const int relay1 = 2; //Arduino pin that triggers relay #1
const int relay2 = 3; //Arduino pin that triggers relay #2
const int relay3 = 4; //Arduino pin that triggers relay #3
const int relay4 = 5; //Arduino pin that triggers relay #4

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}
  
void extendActuator() {
digitalWrite(relay1, HIGH);
digitalWrite(relay2, LOW);
digitalWrite(relay3, HIGH);
digitalWrite(relay4, LOW);
}
 
void retractActuator() {
digitalWrite(relay1, LOW);
digitalWrite(relay2, HIGH);
digitalWrite(relay3, LOW);
digitalWrite(relay4, HIGH);
}
 
void stopActuator() {
digitalWrite(relay1, LOW);
digitalWrite(relay2, LOW);
digitalWrite(relay3, LOW);
digitalWrite(relay4, LOW);
}

void loop(){
extendActuator();
delay(1000);
 
stopActuator();
delay(1000);
retractActuator();
delay(1000);
 
stopActuator();
delay(5000);

}
