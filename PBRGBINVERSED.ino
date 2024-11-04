// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin


// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(7, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(7, HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
  } else {
    // turn LED off:
    digitalWrite(7, LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
  }
}


