int count = 0;
int pos = 0;
int buttonState = 0;
int buttonPin = 10;

//Simple function to send instructions to actuators.
void receiveEvent(int recvData) {
  while (0 < Wire.available()) {
    bool x = Wire.read();

    if (x == true) {
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        delay(15);
      }
      Serial.println(count);
      openwindow = false;
      count ++;
    }
    else if (x == false) {
      for (pos = 180; pos >= 0; pos -= 1) {
        myservo.write(pos);
        delay(15);
      }
      Serial.println(count);
      openwindow = true;
      count = 0;
    }
  }
}

void requestEvent() {
  byte response[ANSWERSIZE];

  //Format responsedata as an Array.
  for (byte i = 0; i < ANSWERSIZE; i++) {
    response[i] = (byte)answer.charAt(i);
  }

  Wire.write(response, sizeof(response));
  Serial.println("Request sent.");

}
