#include "main.h"

/**
 * factorial - give the factorial of a number
 * @n: the number input
 * Return: the factorial
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

