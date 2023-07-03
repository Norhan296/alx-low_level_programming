#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the pointer to the memory
 * @b: constant byte
 * @n: max byte 
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr ++, n--)
	{
		a[itr] = b;
	}

	return (s);
}
