#include "main.h"

/**
 * _strcat - append src string to the dest string
 * @dest: the destination intput
 * @src: the source input
 * Return: destination resuting
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}
