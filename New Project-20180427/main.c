/* External variables */
#include <stdio.h>
int result = 1 ;

void power (); /* function prototype */


int main()
{
	int n = 30, i;
	
	for ( i = 0 ; i <= n ; i ++)
	{
		printf("\n%10d   ", i);
		power ( ) ;
	}
		
	
	return 0;
}