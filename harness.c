
/*the first line's been intentionally left blank.*/
/***********************************************************************************************************/
#include "testFuncs1.h"

/***********************************************************************************************************/


/*the excuse of a harness*/
void main (void)
{
	testFuncStatementsinmple();

	testFuncStatementComplexIf();

	testFuncStatementNotCoverage();

	testFuncLoopFor ();

	testFuncLoopWhile ();

	testFuncContinue();

	testFuncBreak();

	testFuncGoto();

	testFuncNotReturn(3U , 7U);

	testFuncMultiLineStatement();

	testFuncMultipleStatement();

	testFuncMultipleStatementNot();

	testFuncCompOpti1();

	testFuncCompOpti2();

	testFuncCompOpti3();

	/*this function tests dead code so it should not be called.*/
	#if 0
	testFuncCompOpti4();
	#endif

	testFuncStatementDecl1();

	testFuncStatementInt1(1U , 2U);

	/*for some reason gcc has a problem with these 2 functions*/
	#if (GCC != COMPILER)
	testFuncStatementBool1(0U , 0U);

	testFuncStatementBool1(1U , 1U);

	testFuncStatementbool2(1U , 0U);

	testFuncStatementbool2(0U , 1U);
	#endif

	testFuncStatementDecision1(0U , 0U);

	testFuncStatementDecision1(0U , 1U);

	#if 0
	testFuncStatementDecision1(1U , 1U);
	#endif

	testFuncShortCircuit(1U , 1U);

	#if 0
	testFuncShortCircuit();
	#endif

	testFuncMCDC1(1U , 0U);

	testFuncMCDC1(0U , 1U);

	#if (TRUE == INLINE)
		testFuncMultiInstantiation(20U);

		testFuncMultiInstantiation(5U);
	#endif

	testFuncQMark(30U , 80U);

	#if 0
	testFuncQMark(50U , 30U);
	#endif

	testFuncCallBool();

}
/***********************************************************************************************************/
/*the last line's been intentionally left blank.*/
