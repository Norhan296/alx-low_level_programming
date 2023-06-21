#include "main.h"
#include <stdio.h>
/**
 * _abs - function that compute the absolute value of an integer
 *
 * it takes n as input and the output from function
 * Return: Always 0 (success)
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
