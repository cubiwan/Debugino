#define DEBUG
#define TRACE
#define INFO
#define ERROR
#define TEST

#include <Debug.h>

int c = 0;

void(* reset) (void) = 0;

void setup() {
  Serial.begin(9600); 
 }

void loop() {  
  TRACEMSG("Start loop");
  inc();
  TEST(c<30);
  DEBUGPRINT("Value of C ")
  DEBUGPRINTLN(c);
  #ifdef ERROR
    if(c > 40)
      STOP
  #endif
  
  delay(500);
}


void inc(){
  ENTER  
    c++;
  EXIT
}
