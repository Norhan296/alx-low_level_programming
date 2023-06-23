#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the char \ should be printed
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int m, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (i = 0; i < m; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
