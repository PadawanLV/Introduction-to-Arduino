// Introduction to Arduino
// Lab 2 - Input
//  Tricolor LED on 11-13
//  Input switches on 2-3, active low

void setup() {
for (int i=2;i<5;i++) {
 pinMode(i,INPUT_PULLUP);
 pinMode(i+9,HIGH);
 }
}

void loop(){
for (int i=2;i<5;i++) 
 digitalWrite(i+9,digitalRead(i));
}

