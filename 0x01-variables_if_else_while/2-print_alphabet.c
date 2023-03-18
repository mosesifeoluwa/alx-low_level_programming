#include <stdio.h>

/**
 * main- Print Alphabet
 *
 * Return: 0 (Always Success)
*/

int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
