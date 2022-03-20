#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
int led = 13;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(led, OUTPUT);
}

void loop(){
  if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        irrecv.resume();
        
     switch(results.value){
          case 0xFFA25D:
            //Serial.println("power pressed");
             digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
            break;
          //Keypad button "5"
         
         
          }
         

          
  }
}
