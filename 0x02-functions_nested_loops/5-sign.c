#include "main.h"
/**
 *print_sign - print + if n is greater then 0.
 * 0 if n is  = 0 
 * and - if n is less than 0
 *
 *Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
