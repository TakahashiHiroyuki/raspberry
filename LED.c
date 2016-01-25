#include <wiringPi.h>

#define GPIO22 22 
#define GPIO23 23
#define GPIO24 24

int main(void) {
    int i;
 
    if(wiringPiSetupGpio() == -1) return 1;
 
    pinMode(GPIO22, OUTPUT);
    pinMode(GPIO23, OUTPUT);
    pinMode(GPIO24, OUTPUT);

    for(i=1; i<=2; i++){
	digitalWrite(GPIO22, 0);
        digitalWrite(GPIO23, 0);
	digitalWrite(GPIO24, 0);
	delay(1000);
        digitalWrite(GPIO22, 1);
	digitalWrite(GPIO23, 0);
	digitalWrite(GPIO24, 0);
        delay(1000);
        digitalWrite(GPIO22, 0);
	digitalWrite(GPIO23, 1);
	digitalWrite(GPIO24, 0);
        delay(1000);
        digitalWrite(GPIO22, 1);
	digitalWrite(GPIO23, 1);
	digitalWrite(GPIO24, 0);
        delay(1000);
        digitalWrite(GPIO22, 0);
	digitalWrite(GPIO23, 0);
	digitalWrite(GPIO24, 1);
        delay(1000);
        digitalWrite(GPIO22, 1);
	digitalWrite(GPIO23, 0);
	digitalWrite(GPIO24, 1);
        delay(1000);
        digitalWrite(GPIO22, 0);
	digitalWrite(GPIO23, 1);
	digitalWrite(GPIO24, 1);
        delay(1000);
        digitalWrite(GPIO22, 1);
	digitalWrite(GPIO23, 1);
	digitalWrite(GPIO24, 1);
        delay(1000);
    }
    digitalWrite(GPIO22, 0);
    digitalWrite(GPIO23, 0);
    digitalWrite(GPIO24, 0);
    return 0;
}


