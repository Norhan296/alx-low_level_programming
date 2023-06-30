#include "main.h"

/**
 * rot13 - rotate char to 13 chars
 * @s: string
 * Return: string  rotated with 13
 */

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT[i];
				break;
			}
		}
		s++
	}
	return (ptr);
}
