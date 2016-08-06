
/*the first line's been intentionally left blank.*/
/***********************************************************************************************************/
/*defines*/
#define FALSE 0
#define TRUE 1


/***********************************************************************************************************/
/*choose the compiler*/

#define COMPILER 	GCC

#define HCS12	1U
#define MPC 	2U
#define RL78	3U
#define GCC		4U
#define CLANG	5U

/***********************************************************************************************************/
/*options*/

/*this option sets the infinite while loop to see how your tool reacts to it.*/
/*setting it to ON enables it. setting it to anything else disables it but go with OFF for good taste.*/
/*setting this option to ON will practically disable the rest of the tests.*/
#define INF_LOOP FALSE

/*turn on the testing of inline functions*/
#define INLINE FALSE 		

/***********************************************************************************************************/
/*the compiler's gonna be needing some sorta pragmas to handle some keywords correctly or altogether.*/
/*you need pragmas for inlining, boolean, etc.*/
/*if your compiler needs em, put em here.*/




/***********************************************************************************************************/

#if (HCS12 == COMPILER)
	#define blreplacement unsigned char
#endif
#if (MPC == COMPILER)
	#define blreplacement unsigned char
#endif
#if (RL78 == COMPILER)
	#define blreplacement unsigned char
#endif
#if (GCC == COMPILER)
	#define blreplacement unsigned char
#endif





/***********************************************************************************************************/
/*all the test function prototypes are here.*/

void testFuncStatementsinmple (void);
void testFuncStatementComplexIf (void);
void testFuncStatementNotCoverage (void);
void testFuncLoopFor (void);
void testFuncLoopWhile (void);
void testFuncContinue (void);
void testFuncBreak (void);
void testFuncGoto (void);
int testFuncNotReturn (int a, int b);
void testFuncMultiLineStatement (void);
void testFuncMultipleStatement (void);
void testFuncMultipleStatementNot (void);
void testFuncCompOpti1 (void);
void testFuncCompOpti2 (void);
void testFuncCompOpti3 (void);
void testFuncCompOpti4 (void);
void testFuncStatementDecl1 (void);
int testFuncStatementInt1 (int int1, int int2);
blreplacement testFuncStatementbool1 (blreplacement bool1 , blreplacement bool2);
blreplacement testFuncStatementbool2 (blreplacement bool1 , blreplacement bool2);
void testFuncStatementDecision1 (blreplacement decision1 , blreplacement decision2);
void testFuncShortCircuit (blreplacement bool1 , blreplacement bool2);
void testFuncMCDC1 (blreplacement decision1 , blreplacement decision2);
#if (TRUE == INLINE)
	void testFuncMultiInstantiation (int level);
#endif
void testFuncQMark (int int1, int int2);


void im_a_mlaign_func (void);
void im_a_benign_func (void);
void im_a_dummy (void);
void im_a_minion_01 (void);
void im_a_minion_02 (void);
void im_a_minion_03 (void);

#if (TRUE == INLINE)
	#if (MPC == COMPILER)
		inline void babeFunk (int entry);
	#endif

	#if (HCS12 == COMPILER)
		void babeFunk (int entry);
	#endif
#endif

/***********************************************************************************************************/
/*ive been intentionally left blank. dont touch me.*/
