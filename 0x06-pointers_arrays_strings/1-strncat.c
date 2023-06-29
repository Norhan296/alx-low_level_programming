include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination input
 * @src: sourse input
 * @n: the number of chars that i want
 * Return: result of destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
