#include "main.h"

/**
 * rev_string - reverses astring
 * @s: the string
 * Return: notning
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		putchar(s[i]);
	putchar('\n');
}
