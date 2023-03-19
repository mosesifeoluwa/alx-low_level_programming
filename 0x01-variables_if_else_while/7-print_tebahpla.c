#include <stdio.h>

/**
 * main- Prints the lowercase alphabet in reverse using putchar function
 *
 * Return: 0 (Alway Success)
*/
int main(void)
{
	char revalph;

	for (revalph = 'z'; revalph >= 'a'; revalph--)
	{
		putchar(revalph);
	}
	putchar('\n');
	return (0);
}
