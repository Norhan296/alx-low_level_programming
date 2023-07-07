#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 *    to the buffer pointed to dest
 *
 * @dest: char type string
 *
 * @src: char type string
 *
 * Return: the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
