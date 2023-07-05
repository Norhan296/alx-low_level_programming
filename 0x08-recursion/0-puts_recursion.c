#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string i should print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		_putchar(*s);
		put_recursion(s + 1);
	}
}
