#include "main.h"
/**
 * _is alpha - function to chech if c is letter
 * in lowercase or uppercase
 *
 * Return: return 1 if it is letter
 * and retrun 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
