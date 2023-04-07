#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: num of arguemnts
 * @argv: array of arguments
 *
 * Return: 0 (Always Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
