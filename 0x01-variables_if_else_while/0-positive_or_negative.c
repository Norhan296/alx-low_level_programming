#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: 'check for number if it is positive or negative'
 * return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n "is positove");
	}
	else if (n == 0)
	{
		printf("%d", n "is zero");
	}
	else
	{
		printf("%d", n "is negative");
	}

	return (0);
}
