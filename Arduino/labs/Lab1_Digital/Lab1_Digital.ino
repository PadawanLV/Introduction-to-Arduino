// Introduction to Arduino
// Lab 1 - Digital
// Sequences digital LEDS on 9-13

int led;

void setup() {
 for (led=9; led<14; led++) {
  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
 }
 led = 9;
}

void loop(){
 digitalWrite(led,LOW);
 delay(500);
 digitalWrite(led,HIGH);
 led++;
 if  (led>13) led=9;
}

