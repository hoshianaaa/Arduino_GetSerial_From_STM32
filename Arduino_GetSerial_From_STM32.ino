void setup() {
  
  Serial.begin(9600);
}

uint8_t rxbuf[1];
void loop() {

  if(Serial.available()){
    rxbuf[0] = Serial.read();
    Serial.println(rxbuf[0]);
  }
}
