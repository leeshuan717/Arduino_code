//進入AT MODE 
//Serial3做藍芽端 Serial做電腦端

void setup() {
  Serial.begin(38400);
  Serial3.begin(38400);//hc-05必要
  Serial.println("BT is ready");
}

void loop() {
  if(Serial3.available()){
    Serial.write(Serial3.read());
    delay(20);
  }
  if(Serial.available()){
    Serial3.write(Serial.read());
    delay(20);
  }
  delay(20);
}
