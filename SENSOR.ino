int state;

void magneet() {
  state = digitalRead(sensor);
  if (state == HIGH) {
    Serial.println("dicht");
    contact = true;
  }
  else {
    Serial.println("open");
    contact = false;
  }
  delay(200);
}
