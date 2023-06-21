#include "main.h"
/**
 *
 *
 *
 *
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			        _putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
