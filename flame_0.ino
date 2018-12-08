// LED Fire Effect
// base https://www.instructables.com/id/Realistic-Fire-Effect-with-Arduino-and-LEDs/
// small changes by Nicu FLORICA (niq_ro)

byte ledPin1 = 10;
byte ledPin2 = 9;
byte ledPin3 = 11;
byte minim = 0;
byte maxim = 255;

void setup()
{
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop() {
analogWrite(ledPin1, random(maxim)+minim);
analogWrite(ledPin2, random(maxim)+minim);
analogWrite(ledPin3, random(maxim)+minim);
delay(random(100));
}
