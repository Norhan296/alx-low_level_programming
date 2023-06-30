#include "main.h"
#include <stdio.h>

/**
 * isLower - checkes if c is lower
 * @c: a character
 * Return: 1 if is true else 0
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - checkes if c is delemiter or not
 * @c: is a character
 * Return: 1 if is true and 0 if not
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)		
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 ** cap_string - capitalize words 
 * @s: input string
 * Return: string with capital
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter[*s])
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{

			*s -= 12;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}


