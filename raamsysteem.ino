#include <Servo.h>
#include <Wire.h>
#define SLAVE_ADDR 9
#define ANSWERSIZE 5
int led = 13;
int val = 0;
String answer;
Servo myservo;
int sensor = 8;
int ledRood = 2;
int ledGroen = 3;
bool openwindow = false;
bool contact = true;

void setup() {
  pinMode(sensor, INPUT_PULLUP);
  pinMode(ledGroen, OUTPUT);
  pinMode(ledRood, OUTPUT);
  myservo.attach(6);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Wire.begin(SLAVE_ADDR);
  Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);
  Serial.println("Initializing...\n");
}

void loop() {
 // SERVO();
  magneet();
  checken();
}
