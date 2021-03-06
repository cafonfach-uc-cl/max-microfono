/*
  modified on Sep 8, 2020
  Modified by MohammedDamirchi from Arduino Examples
  https://electropeak.com/learn/
*/


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(2);
  // print out the value you read:
  Serial.println(sensorValue);
  }
