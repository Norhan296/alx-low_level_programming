#include "main.h"
/**
 * _isdigit - checks if c is digit
 * @c: input a digit
 * Return: 1 if it's digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
