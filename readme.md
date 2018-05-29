# DEBUGINO

#### How use it?

You have five flags:

**DEBUG**  
**TRACE**  
**INFO**  
**ERROR**  
**TEST**  

To activate any flag add a #define line at begin of your file, for example:

*#define DEBUG*  
*#define TRACE*  
*#define INFO*  
*#define ERROR*  
*#define TEST*

Each flag let you call differents functions that only works when flag is on. If you set flag off this functions will dissapear when compille and don't waste memory.

For use flags to include your own blocks of code (test for example) you can include your code between:

````C
#ifdef DEBUG
  //Your code if flag DEBUG is defined
#else
  //Your code if flag DEBUG is no defined
#endif

````

#### DEBUG:
**DEBUGPRINT(X)** Serial.print(X);  
**DEBUGPRINTLN(X)** Serial.println(X);  
**DEBUGMSG(X)** Serial.println("DEBUG function file.ino:line X");

#### TRACE:
**TRACEPRINTLN(X)** Serial.println(X);  
**TRACEPRINT(X)** Serial.print(X);  
**TRACEMSG(X)** Serial.println("TRACE function file.ino:line X");  
**ENTER**	Serial.print("TRACE: ENTER -> function"); Usesfull for indicates when enter in a function. Recommended writes in the first line of a function.  
**EXIT** Serial.print("TRACE: EXIT -> function"); Usesfull for indicates when exit of a function. Recommended writes before return instruction.

#### INFO:
**INFOPRINTLN(X)** Serial.println(X);  
**INFOPRINT(X)** Serial.print(X);  
**INFOMSG(X)** Serial.println("INFO function file.ino:line X");  

#### ERROR:
**ERRORPRINTLN(X)** Serial.println(X);  
**ERRORPRINT(X)** Serial.print(X);  
**ERRORMSG(X)** Serial.println("ERROR function file.ino:line X");  
**ASSERT(X)** Evaluates if X is true if fails stop program  
**ASSERTNONULL(X)** Evaluates if X is null if is null stop program  
**STOP** Frozen program (enter in an infinite loop)  
**SOFTWARERESET** Reset arduino (not always work)  

#### TEST:
**TESTPRINTLN(X)** Serial.println(X);  
**TESTPRINT(X)** Serial.print(X);  
**TESTMSG(X)** Serial.println("TEST function file.ino:line X");  
**TEST(X)** Evaluates if X is true and print result  
**TESTNULL(X)** Evaluates if X is null and print result  
