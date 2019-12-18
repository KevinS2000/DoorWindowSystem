void checken() {
  if (contact != openwindow) {
    Serial.println("ik doe het");
    digitalWrite(ledGroen, HIGH);
    digitalWrite(ledRood, LOW);
    delay(1000);
  }
  else {
    digitalWrite(ledGroen, LOW);
    digitalWrite(ledRood, HIGH);
    Serial.println("inbreker");
  }
}
