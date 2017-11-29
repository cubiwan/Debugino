/*
  Debug.h - Library with tools for debug code.
  Created by Cubiwan 2014
  Released into the public domain.
*/

#ifndef Debug_h
	#define Debug_h

#ifdef DEBUG
	#define DEBUGPRINTLN(X) Serial.println(X);
	#define DEBUGPRINT(X) Serial.print(X);
	#define DEBUGMSG(X) \
		Serial.print("DEBUG: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		Serial.println(X);
#else
	#define DEBUGPRINTLN(X) // nothing
	#define DEBUGPRINT(X) // nothing
	#define DEBUGMSG(X) // nothing
#endif

#ifdef TRACE
	#define TRACEPRINTLN(X) Serial.println(X);
	#define TRACEPRINT(X) Serial.print(X);
	#define TRACEMSG(X) \
		Serial.print("TRACE: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		Serial.println(X);
	#define ENTER  \
		Serial.print("TRACE: ENTER -> ");  \
		Serial.println(__PRETTY_FUNCTION__);
	#define EXIT  \
		Serial.print("TRACE: EXIT -> ");  \
		Serial.println(__PRETTY_FUNCTION__);
#else
	#define TRACEPRINTLN(X) // nothing
	#define TRACEPRINT(X) // nothing
	#define TRACEMSG(X) // nothing
	#define ENTER // nothing
	#define EXIT // nothing
#endif

#ifdef INFO
	#define INFOPRINTLN(X) Serial.println(X);
	#define INFOPRINT(X) Serial.print(X);
	#define INFOMSG(X) \
		Serial.print("INFO: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		Serial.println(X);
#else
	#define INFOPRINTLN(X) // nothing
	#define INFOPRINT(X) // nothing
	#define INFOMSG(X) // nothing
#endif

#ifdef ERROR
	#define ERRORPRINTLN(X) Serial.println(X);
	#define ERRORPRINT(X) Serial.print(X);
	#define ERRORMSG(X) \
		Serial.print("ERROR: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		Serial.println(X);
	#define ASSERT(X) \
		Serial.print("ASSERT: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		assert(X);
	#define ASSERTNONULL(X) \
		Serial.print("ASSERT: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		assertNoNull(X);
	#define STOP stop();
	#define SOFTWARERESET softwareReset();
#else
	#define ERRORPRINTLN(X) // nothing
	#define ERRORPRINT(X) // nothing
	#define ERRORMSG(X) // nothing
	#define ASSERT(X) // nothing
	#define ASSERTNONULL(X) // nothing
	#define STOP // nothing
	#define SOFTWARERESET // nothing
#endif

#ifdef TEST
	#define TESTPRINTLN(X) Serial.println(X);
	#define TESTPRINT(X) Serial.print(X);
	#define TESTMSG(X) \
		Serial.print("TEST: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		Serial.println(X);
	#define TEST(X) \
		Serial.print("TEST: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		test(X);
	#define TESTNULL(X) \
		Serial.print("TEST: ");  \
		Serial.print(__PRETTY_FUNCTION__); \
		Serial.print(' '); \
		Serial.print(__FILE__); \
		Serial.print(':'); \
		Serial.print(__LINE__); \
		Serial.print(' '); \
		testNull(X);
#else
	#define TESTPRINTLN(X) // nothing
	#define TESTPRINT(X) // nothing
	#define TESTMSG(X) // nothing
	#define TEST(X) // nothing
	#define TESTNULL(X) // nothing
#endif

#ifdef ERROR
	void stop();

	void assert(bool t);

	void assertNotNull(void* o);

	void test(bool t);

	void testNull(void* o);

	void softwareReset();
#endif

#endif
