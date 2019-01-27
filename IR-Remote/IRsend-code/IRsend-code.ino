// IR Transmitter ...
#include <IRremote.h>

IRsend irsend;
 
void setup()
{
   Serial.begin(9600);
}

void loop() {
    irsend.sendSAMSUNG(0xE0E040BF,32); //power button
      delay(40);

	}
