#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array of numbers
 * @n: number of elements
 * we can use printf
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
