#include <stdio.h>
#include "main.h"

/**
 * main - print all args it receives
 * @argc: num of args
 * @argv: array of args
 *
 * Return:0 (Always Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
