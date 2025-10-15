#include <Servo.h>

Servo servo1;

void setup() {

servo1.attch(5);
}

void loop() {
 servo1.write(0);
 delay(200);
 servo1.write(30);
 delay(200);
 servo1.write(60);
 delay(200);
 servo1.write(90);
 delay(200);
 servo1.write(60);
 delay(200);
 servo1.write(30);
 delay(200);

}
