#include <stdio.h>
#include <wiringPi.h>
#include "thinger/thinger.h"

#define	LED_PIN 0

#define USER_ID             "aimtechs"
#define DEVICE_ID           "raspi"
#define DEVICE_CREDENTIAL   "123456789"

int main(int argc, char *argv[])
{

    thinger_device thing(USER_ID, DEVICE_ID, DEVICE_CREDENTIAL);
	wiringPiSetup();
	pinMode(LED_PIN, OUTPUT);




    // define thing resources here. i.e, this is a sum example
    thing["sum"] = [](pson& in, pson& out){
        out["result"] = (int) in["value1"] + (int) in["value2"];
    };



	thing["LED"] << [](pson & in){
        if(in.is_empty()){
			digitalWrite(LED_PIN, in ? HIGH : LOW);
        }
		else{
        	if(in){
				digitalWrite (LED_PIN, HIGH);
        	}else{
        		digitalWrite (LED_PIN, LOW);
        	}
        }
	};

    thing.start();
    return 0;
}
