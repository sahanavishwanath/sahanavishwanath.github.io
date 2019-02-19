// analog input pin that the photoresistor is attached to
const int analogInPin = A1;
// value read from the photoresistor
int sensorValue = 0;

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
  // set analogInPin A0 as an input
  pinMode(analogInPin, INPUT);
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogInPin);
  // prints 'The sensor value is ' to the serial monitor
  Serial.print("The sensor value is ");
  // prints the sensorValue to the serial monitor                
  Serial.println(sensorValue);
}
