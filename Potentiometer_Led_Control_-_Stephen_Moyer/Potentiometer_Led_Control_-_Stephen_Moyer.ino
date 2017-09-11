const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = D5; // Analog output pin that the LED is attached to


int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  Serial.begin(115200);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 100, 0, 1023)
  


  analogWrite(analogOutPin, outputValue);
}
