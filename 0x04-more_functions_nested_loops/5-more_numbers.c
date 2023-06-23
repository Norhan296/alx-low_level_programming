#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n, num, count;

	for (n = 0; n <= 9; n++)
	{
		while (count = 0; count <= 14)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
