#include "main.h"

/**
 * _pow_recursion - returns the value x to the power y
 * @x: the value should powered
 * @y: the power
 * Return: the value powered to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
