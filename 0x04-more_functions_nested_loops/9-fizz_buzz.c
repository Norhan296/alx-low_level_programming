#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz instead of multiples of 3
 * and prints buzz instesd of multiples of 5
 * and prints fizzbuzz if it multiples of both 3, 5
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}	
