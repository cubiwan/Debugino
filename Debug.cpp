/*
  Debug.cpp - Library with tools for Debug Morse code.
  Created by Cubiwan 2014
  Released into the public domain.
*/

#if (ARDUINO >= 100)
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif

void stop(){
  Serial.print("STOP!!!");
  Serial.flush();
  noInterrupts();
  while(1){
    delay(1000);
  };
}

void softwareReset() {
  Serial.print("RESET!!!");
  Serial.flush();
  asm volatile ("  jmp 0");
}

void assert(bool t){
  if(!t){
    Serial.println("Fail");
    stop();
  } else {
    Serial.println("Pass");
  }
}

void assertNoNull(void* o){
  if(o == ((void *)0)){
    Serial.println("Fail");
    stop();
  } else {
    Serial.println("Pass");
  }
}

void test(bool t){
  if(!t){
    Serial.println("False");
  } else {
    Serial.println("True");
  }
}

void testNull(void* o){
  if(o == ((void *)0)){
    Serial.println("is null");
   } else {
    Serial.println("is no null");
  }
}
