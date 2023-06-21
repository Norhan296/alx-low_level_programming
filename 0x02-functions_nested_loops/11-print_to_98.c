#include "main.h"
/**
 *
 *
 *
 */

void print_to_98(int n)
{
	int m;

	if (m < 98)
	{
		for (m = n; m < 98; m++)
			printf("%d", m);
	}
	else if (m > 98)
		for (m = n; m > 98; m--)
			printf("%d", m);
	else
		printf("98\n");
}
