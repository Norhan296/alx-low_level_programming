#include "main.h"

/**
 * is_palindrome - checks if string is palindrome or not
 * @s: the string
 * Return: 1 if is palindrome and if not
 */



int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}	


/**
 * check - checks if the string is palindrome or not
 * @s: the string
 * @start: the start of string
 * @end: the end of the string
 * @mod: the mod over len
 * Return: nothing
 */






int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}


int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && end == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (checks(s, start + 1, end - 1, mod));
}
