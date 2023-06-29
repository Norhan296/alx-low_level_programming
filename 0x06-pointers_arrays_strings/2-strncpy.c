#include "main.h"
/**
 * _strncpy - cpoies a string
 * @dest: destination input
 *
 * @src: source input
 *
 * @n: number of chars that would be copied
 * Return: the result destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}	
