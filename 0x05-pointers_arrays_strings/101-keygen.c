#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p[100];
	int i, n, x;

	x = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		x += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - x) - '0' < 78)
		{
			n = (2772 - x - '0');
			x += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
