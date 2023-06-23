#include "main.h"
/**
 * print_numbers - prints numners from 0 t0 9
 * only using _putchar twice
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int n = 0;

	while (n >= 48 && n <= 57)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
