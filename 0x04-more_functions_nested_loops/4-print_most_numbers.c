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
	int n = 0;

	while (n >= 48 && n <= 57)
	{
		if (n == 2 || n == 4)
			continue
		else
			_putchar(n + 48);
	}
	_putchar('\n');
}
