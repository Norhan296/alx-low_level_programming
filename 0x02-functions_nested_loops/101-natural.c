#include <stdio.h>
/**
 *
 *
 *
 */

int main(void)
{
	int n ;
	
	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			printf("%d, ",n);
		}
	}	       
}
