int led = 12;
int buttonpin = 11;
int buttonState = 0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(115200);
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(buttonpin, INPUT_PULLUP);
  //digitalWrite(buttonpin, HIGH);       // turn on pullup resistors
}

// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(buttonpin);
  Serial.print(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print("under HIGH...");
  delay(1000);     // wait for a second
  }
  else {
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW        
  Serial.print("under LOW...");
  delay(1000); // wait for a second
  }
}
