#include <stdio.h>

/**
 * main- Print Uppercase and Lowercase Alphabet using the Putchar function
 *
 * Return: 0 (Alway Success)
*/
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
