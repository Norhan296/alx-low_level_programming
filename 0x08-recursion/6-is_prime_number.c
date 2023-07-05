#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - return 1 if it is prime else return 0
 * check_prime - checjs all numbers < n if they can divide it 
 *
 * @othrn: int
 * @n: integer input
 * Return: 1 if number is prime 
 * else return 0
 */

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 2)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else 
		return (check_prime(n, othrn + 1));
}
