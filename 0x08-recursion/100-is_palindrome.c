#include "main.h"

/**
 * last_index - returns the last index of a string counting the null character
 * @s: the string
 * Return: int
 */



int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}	


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - checks for the palindrome
 * @s: string
 * @mod: int
 * @start: int moves from right to left
 * @end: int moves from left to right
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && end == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
