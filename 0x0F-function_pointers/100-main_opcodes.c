#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes
 * @a: address
 * @n: number of bytes
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 (Always Success)
 */

int main(int argc, char **argv)
{
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, y);
	return (0);
}
