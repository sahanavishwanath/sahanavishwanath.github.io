// analog input pin that the photoresistor is attached to
const int analogInPin = A0;  
// output pin that the blue LED light is connected to
const int ledPin = 11; 

// value read from the photoresistor
int sensorValue = 0; 
// value output to the PWM (analog out)
int outputValue = 0; 

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);  
  // set analogInPin A0 as an input
  pinMode(analogInPin, INPUT);  
  // set ledPin 11 as an output
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  
  // turn the blue LED light off if the sensor Value is lower than 100 
  if (sensorValue < 800) {
    // turns off blue LED light off
    analogWrite(ledPin, 0); 

    // print "Blue light off!" to the serial monitor
    Serial.println("Blue light off!"); 
  }
  // turn the blue LED light on if the sensor Value is greater than 100 
  else {
    // set blue LED light to level of outputValue
    analogWrite(ledPin, outputValue); 

    // print "Blue light on!" to the serial monitor
    Serial.println("Blue light on!"); 
  }

  // wait 2 milliseconds before the next loop
  delay(2);
}
