/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

void setup() {
  // initialize LED red light to output 8.
  pinMode(8, OUTPUT);
  // initialize LED green light to output 9.
  pinMode(9, OUTPUT);
  // initialize LED yellow light to output 10.
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // turn the LED red light on
  digitalWrite(8, HIGH); 
  // turn the LED green light on                       
  digitalWrite(9, HIGH); 
  // turn the LED yellow light on
  digitalWrite(10, HIGH);
  // wait for half a second
  delay(500);  
  
  // turn the LED red light off                    
  digitalWrite(8, LOW);
  // wait for a quarter of a second
  delay(200);
  // turn the LED green light off
  digitalWrite(9, LOW); 
  // wait for a quarter of a second
  delay(200);
  // turn the LED yellow light off
  digitalWrite(10, LOW);
  // wait for half a second
  delay(500);
}
