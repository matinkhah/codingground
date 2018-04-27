/* External variables */
#include <stdio.h>

extern int result;
/* power function */
void power (  )
{
	printf("   %10d ", result);
	result = result * 2 ;
}