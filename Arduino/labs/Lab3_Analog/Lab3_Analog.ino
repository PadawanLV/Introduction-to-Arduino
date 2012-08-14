// Introduction to Arduino
// Lab 3 - Analog
// Analog Input on A0, Audio Output on DS

void setup(){
}

void loop(){
 int analogValue = analogRead(A0);
 int toneValue = map(analogValue,0,255,100,1000);
 tone(3,toneValue);
}

