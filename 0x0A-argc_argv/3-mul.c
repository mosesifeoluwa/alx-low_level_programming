#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to be converted
 *
 * Return: int converted
 */

int _atoi(char *s)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int len = 0;
	int m = 0;
	int n = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (a % 2)
				n = -n;
			b = b * 10 + n;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (b);
}

/**
 * main - multipy two nums
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);
	return (0);
}
