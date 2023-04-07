#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints min num of coin
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, x, y;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && x >= 0; i++)
	{
		while (x >= c[i])
		{
			y++;
			x -= c[i];
		}
	}
	printf("%d\n", y);
	return (0);
}
