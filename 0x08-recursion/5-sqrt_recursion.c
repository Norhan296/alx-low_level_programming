#include "main.h"

/**
 * _sqrt_recursion - print the square root of a number
 * @n: a number input
 * @val: square root
 * Return: the natural square root or a number
 */


int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
{
	return (val);
}
else if (val * val < n)
{
	return (square(n, val + 1));
}
else
{
	return (-1);
}
}
