#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, max;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			max = num / x;
		}
	}

	printf("%ld\n", max);

	return (0);
}
