/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

//int sensorPin = A0;    // select the input pin for the potentiometer
const int ledPin1 = 10;      // the number of the LED pin
const int ledPin2 = 11;
const int ledPin3 = 12;
const int ledPin4 = 13;
//int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT); 
}

void loop() {
  // read the value from the sensor:
  //sensorValue = analogRead(sensorPin);
  int val = analogRead(0);
  val = map(val, 0, 1023, 10, 13);
  // turn the ledPin on
  digitalWrite(val, HIGH);
  // stop the program for <sensorValue> milliseconds:
 // delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(val, LOW);
  // stop the program for for <sensorValue> milliseconds:
 // delay(sensorValue);
}
