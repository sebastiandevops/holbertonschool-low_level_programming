#include<stdio.h>
#include<math.h>

/**
 * main - prints the largest prime factor of the number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int n = 612852475143, i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%d", max);
	return (0);
}
