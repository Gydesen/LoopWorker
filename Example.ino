//
// This is a simple blink example using the LoopWorker
//

#include "LoopWorker.h"

//We need to create the LoopWorker outside set() othervise it will not live in loop()
LoopWorker myBlink(1, "s"); //this makes an object of LoopWorker that is set to trigger every 500 millisecond

void setup() {
  pinMode(13, OUTPUT); //We need to set up pin 13 to get the Arduino blinking.
}

void loop() {
  //we see if myBlink is ready
  if(myBlink.rdy()){
    //if it is, we make a digitalWrite that is the opposit of the value before
    digitalWrite(13, !digitalRead(13));
  }
}
