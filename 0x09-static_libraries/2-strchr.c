#include "main.h"

/**
 * _strchr - locates a char in a string
 * @c: the character
 * @s: the string
 * Return: pointer to s 
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
