// analog input pin that reads y value
int yPin = A0; 
// value read by the motor
int yValue = 0; 
// value output to the motor
int outputValue = 0;
// output pin that motor is connected to
int motorPin = 10; 

void setup() {
  // set motorPin 10 as an output
  pinMode(motorPin, OUTPUT);  
  // initialize serial communications at 9600 bps
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value
  yValue = analogRead(yPin); 
  // prints 'The y value is ' to the serial monitor
  Serial.print("The y value is  ");  
  // prints the y value to the serial monitor
  Serial.println(yValue);  
  // map the yValue to the range of the analog out
  outputValue = map(yValue, 0, 1023, 100, 255);  
  // set motor speed to the motorValue
  analogWrite(motorPin, outputValue);  
  
  // wait 30 milliseconds before the next loop starts
  delay(15); 
}
