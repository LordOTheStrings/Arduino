//int sensorPin = A0;    // select the input pin for the potentiometer
const int ledPin1 = 10;      // the number of the LED pin
const int ledPin2 = 11;
const int ledPin3 = 12;
const int ledPin4 = 13;
const int trigPin = 3;
const int echoPin = 4;
long duration;
int distance;
//int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT); 
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

 // Prints the distance on the Serial Monitor
 Serial.print("Distance:");
 Serial.println(distance);
 // read the value from the sensor:
 //sensorValue = analogRead(sensorPin);
  //int val = analogRead(0);
  distance = map(distance, 0, 23, 10, 13);
 // turn the ledPin on
  digitalWrite(distance, HIGH);
 // stop the program for <sensorValue> milliseconds:
 // delay(sensorValue);
 // turn the ledPin off:
  //digitalWrite(distance, LOW);
  if (distance == 10){
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}
 if (distance == 11){
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
}
if (distance == 12){
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}
if (distance == 13){
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}
 // stop the program for for <sensorValue> milliseconds:
 // delay(sensorValue);
 // Clears the trigPin 
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
}
