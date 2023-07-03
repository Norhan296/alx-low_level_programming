#include <unistd.h>

/**
 * _putchar - writes the charcter in stdout
 * @c: the character c 
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
