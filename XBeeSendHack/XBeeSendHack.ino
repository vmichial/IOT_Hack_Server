/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:

int led = 8;
int buttonState = 0;
  
// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, INPUT);     
  // initialize serial communication at 9600 bits per second:
  Serial1.begin(9600);
  // make the pushbutton's pin an input:
 // pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  // print out the state of the button:
  //Serial.println(buttonState);
  Serial1.write(45);
    
    delay(1);        // delay in between reads for stability
    //digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  buttonState = digitalRead(led);
  Serial1.println(buttonState);
  delay(10);               // wait for a second
  //digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  buttonState = digitalRead(led);
  Serial1.println(buttonState);
  delay(5);  
  Serial1.println("La donna e mobile\n");
  Serial1.println("Cual piuma al viento\n");
}

