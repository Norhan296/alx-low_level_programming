#include "main.h"

/**
 * pint_square - prints a square
 * @size: the size of the square
 * the character # to print square
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int n, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
