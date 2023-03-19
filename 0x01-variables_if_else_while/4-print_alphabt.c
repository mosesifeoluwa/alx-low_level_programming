#include <stdio.h>

/**
 * main- Print all alphabets in lowercase except q and e
 *
 * Return: 0(Alway Success)
*/
int main(void)
{
	char lowercase[24] = "abcdfghijklmnoprstuvwxyz";
		int i;

		for (i = 0; i < 24; i++)
		{
			putchar(lowercase[i]);
		}
		putchar('\n');
		return (0);
}
