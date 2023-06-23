#include "main.h"

/**
 * print_line - print a stright line in the terminal
 * only using _putchar function
 * @n: is number of times ths character - should
 * be printed
 * if n is 0 or less only print \n
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		for (m = 0; m = n; m++)
			_putchar('_');
	_putchar('\n');
}
