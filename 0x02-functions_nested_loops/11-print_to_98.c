#include "main.h"
/**
 *print_to 98 -print n to 98 counts
 * separate by comma. followed
 * by space and number should be
 * print in order
 * 0n: input
 */

void print_to_98(int n)
{
	int m;

	if (n > 98)

		for (m = n; m > 98; m--)
			printf("%d, ", m);
	
	else 
		for (m = n; m < 98; m++)
			printf("%d, ", m);

	printf("98\n");
}
