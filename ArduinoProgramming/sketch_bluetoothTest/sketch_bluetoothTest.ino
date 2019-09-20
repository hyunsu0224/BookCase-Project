#include <SoftwareSerial.h>     // 소프트웨어 시리얼 통신 라이브러리 호출

SoftwareSerial btSerial(2, 3);  // 블루투스 시리얼 통신 객체 선언

void setup() {
  Serial.begin(9600);
  btSerial.begin(9600);
}

void loop() {
  if (btSerial.available()) {       
    Serial.write(btSerial.read());  // 블루투스 내용을 시리얼 모니터에 출력
  }
  if (Serial.available()) {         
    btSerial.write(Serial.read());  // 시리얼 모니터 내용을 블루추스에 출력
  }
}
