#include "main.h"

/**
 * function that check if character is lowercase or not
 * Return 1 if char is lowercase
 *
 *
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
