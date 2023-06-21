#include "main.h"
/**
 *
 *
 *
 */

void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n; m < 98; m++)
			printf("%d", m);
		        printf(", ");
	}
	else if (n > 98)
		for (m = n; m > 98; m--)
			printf("%d", m);
	                printf(", ");
	else
		printf("98\n");
}
