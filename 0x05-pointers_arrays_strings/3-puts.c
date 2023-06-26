#include "main.h"

/**
 * _puts - prints the string followed by new line
 * @str: the string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
