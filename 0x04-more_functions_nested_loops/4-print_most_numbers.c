#include "main.h"

/**
 * print_most_numbers - prints from 0 - 9
 *
 * Except 2 and 4
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int n;

	while (n >= 0 && n <= 9)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
