#include <stdio.h>

/**
 * main- prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Alway Sucess)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
