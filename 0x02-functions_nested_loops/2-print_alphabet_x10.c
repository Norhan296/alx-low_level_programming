#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int line, c;

	for (line = 1; line <= 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
	}
}
