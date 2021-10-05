//Digispark boards have an on-board LED connected on either pin 0 or pin 1.
//This sketch will blink the LED every second on both types of boards.

void setup()
{
  //Set Pins 0 and 1 as outputs.
  //Some Digisparks have a built-in LED on pin 0, while some have it on
  //pin 1. This way, we can all Digisparks.
  pinMode(1, OUTPUT);
}
void loop()
{
  //Set the LED pins to HIGH. This gives power to the LED and turns it on
  digitalWrite(1, HIGH);
  //Wait for a second
  delay(30);
  //Set the LED pins to LOW. This turns it off
  digitalWrite(1, LOW);
  //Wait for a second
  delay(30);
}
