/*
This Code is used to Drive the Timing Control solenoid
*/

int Tran = 9;           // the PWM pin the Transistor is attached to

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(Tran, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the Duty cycle of pin 9:
  analogWrite(Tran, 200);
  delay(30);
  analogWrite(Tran, 0);
  delay(30);
}
