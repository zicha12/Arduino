/*

This Code is used to Drive the Solenoid by sweeping the actuation time

*/

int Tran = 9;    // Transistor connected to digital pin 9

void setup() {
  // nothing 
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int timeValue = 0 ; timeValue <= 255; timeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(Tran, 200);
    // wait for 30 milliseconds to see the dimming effect
    delay(timeValue);
    analogWrite(Tran, 0);
    delay(30);
  }

}
