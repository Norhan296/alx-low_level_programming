#include "main.h"

/**
 * _puts - prints the string followed by new line
 * @str: the string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str + 0);
		str++;
	_putchar('\n');
}
