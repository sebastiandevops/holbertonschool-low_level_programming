#include <stdio.h>
#include <math.h>
#include <stdint.h>

/**
 * main - prints the largest prime factor of the number.
 *
 * Return: Always 0.
 */

int main(void)
{
	long n = 612852475143;
	long maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	printf("%ld\n", maxPrime);
	return (0);
}
