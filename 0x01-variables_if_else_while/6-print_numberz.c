#include <stdio.h>

/**
 * main- Prints all single digit numbers of base 10 using the putchar function
 *
 * Return: 0 (Alway Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
