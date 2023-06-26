#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: a string that convert it to integer
 * the integer include it;s sign + or -
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - 0);
		else if (num > 0)
			break;
	}
		return (num * sign)
}
