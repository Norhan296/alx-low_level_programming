#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: the first value
 * @b: the second value
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
