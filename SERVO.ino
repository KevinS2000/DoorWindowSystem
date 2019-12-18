//int count = 0;
//int pos = 0;
//int buttonState = 0;
//int buttonPin = 10;
//
//
//void SERVO() {
//  buttonState = digitalRead(buttonPin);
//  if (buttonState == HIGH) {
//    count ++;
//  }
//  if (count == 1) {
//    for (pos = 0; pos <= 180; pos += 1) {
//      myservo.write(pos);
//      delay(15);
//    }
//    Serial.println(count);
//    openwindow = false;
//    count ++;
//  }
//  if (count == 3) {
//    for (pos = 180; pos >= 0; pos -= 1) {
//      myservo.write(pos);
//      delay(15);
//    }
//    Serial.println(count);
//    openwindow = true;
//    count = 0;
//  }
//}
