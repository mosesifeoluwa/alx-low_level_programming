#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check
 * @str: array str
 *
 * Return:0 (Always Success)
 */

int check_num(char *str)
{
	unsigned int c = 0;

	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
			return (0);
		c++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count args
 * @argv: args
 *
 * Return:0 (Always Success)
 */

int main(int argc, char *argv[])
{
	int cnt = 1;
	int x;
	int add = 0;

	while (cnt < argc)
	{
		if (check_num(argv[cnt]))
		{
			x = atoi(argv[cnt]);
			add += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", add);
	return (0);
}
