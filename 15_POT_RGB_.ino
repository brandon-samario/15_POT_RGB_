/*
  POT Bit Value and RGB 
  Use potentiometer, set pin to A0 as input
  Analog read on pin A0 and prints the results to the Serial Monitor bit value
  Analog write to set state of RGB LED
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
  Use bit value of analog read to determine siaply of RGB LED 
  As you turn the potentiometer the bit value increases
  As bit value increases it changes colour
*/

//set pin numbers
const int BLUE = 3;
const int GREEN = 5;
const int RED = 6;

const int potValue = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(BLUE, OUTPUT);  // setting blue (pin 3) as output (RGB LED)
  pinMode(GREEN, OUTPUT); // setting green (pin 5) as output (RGB LED)
  pinMode(RED, OUTPUT); // setting red (pin 6) as output (RGB LED)
  Serial.begin(9600); // start serial connection
}

// the loop routine runs over and over again forever
void loop() {
  int potValue = analogRead(A0); // read the input on analog pin 0
 
  if(potValue < 200) // if bit value is less than 200 RGB LED is black
  { 
    analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    Serial.println("Black"); // pushbutton print value
  }
  else if(potValue < 400) // if bit value is less than 400 RGB LED is blue
  {
    analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
    analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    Serial.println("Blue"); // pushbutton print value
  }
  else if(potValue < 600) // if bit value is less than 600 RGB LED is green
  {
    analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
    analogWrite(RED, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    Serial.println("Green"); // pushbutton print value
  }
  else if(potValue < 800) // if bit value is less than 800, RGB LED is red
  {
    analogWrite(BLUE, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(GREEN, 0); // Turns off the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 0 lowest value
    analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
    Serial.println("Red"); // pushbutton print value
  }
  else // if bit value is more than 800, RGB LED is white
  {
  analogWrite(BLUE, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
  analogWrite(GREEN, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
  analogWrite(RED, 255); //Turns on the pin or colour on the RGB LED ranges between 0-255 for analog outputs, 255 highest value
  Serial.println("White"); // pushbutton print value
  }
}


