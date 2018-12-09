// LED Fire Effect
// base https://www.instructables.com/id/Realistic-Fire-Effect-with-Arduino-and-LEDs/
// small changes by Nicu FLORICA (niq_ro)

/*
#define ledPin1 10 // for Arduino Uno, Nano, etc
#define ledPin2  9
*/

#define ledPin1 0 // phical pin 5 for Attiny25/45/85 as Arduino
#define ledPin2 1 // phisical pin 6 

byte minim = 0;
byte maxim = 255;

void setup()
{
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {
analogWrite(ledPin1, random(maxim)+minim);
analogWrite(ledPin2, random(maxim)+minim);
delay(random(100));
}
