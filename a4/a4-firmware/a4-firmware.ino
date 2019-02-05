// analog input pin that the photoresistor is attached to
const int analogInPin = A0;  
// output pin that the LED strip light is connected to
const int ledPin = 9; 

// value read from the photoresistor
int sensorValue = 0; 
// value output to the PWM (analog out)
int outputValue = 0; 

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);  
  // set analogInPin A0 as an input
  pinMode(analogInPin, INPUT);  
  // set ledPin 9 as an output
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out
  outputValue = map(sensorValue, 100, 600, 124, 255);
  // set the brightness of the LED as outputValue
  analogWrite(ledPin, outputValue);
}
