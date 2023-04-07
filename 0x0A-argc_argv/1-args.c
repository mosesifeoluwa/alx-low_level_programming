#include <stdio.h>
#include "main.h"

/**
 * main - print number of arg passed to program
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (Always Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
