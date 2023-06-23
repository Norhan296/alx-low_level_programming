#include <stdio.h>
/**
 * _sqrt - prints the sqare of the number
 * @x: input number
 * Return: Always 0 (Success)
 */

double _sqrt(double x)
{
	float sqrt, temp;

	sqrt = x / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (x / temp + temp) / 2;
	}
	return (sqrt);
}
/**
 * largest_prime_factor - prints largest prime factor
 * @num: find a number
 */

void largest_prime_factor(long int num)
{
	int prime, largest;
	
	while (num % 2 == 0)
		num = num / 2;
	for (prime = 3; prime <= _sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}
	if ( num > 2)
		largest = num;
	printf("%d\n", largest);
}


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}



















