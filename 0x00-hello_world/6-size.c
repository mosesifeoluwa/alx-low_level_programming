#include<stdio.h>
/**
 * main - C code to print size of various data types
 *
 * Return: 0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", (signed int) sizeof(a));
	printf("Size of an int: %d byte(s)\n", (signed int) sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (signed int) sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (signed int) sizeof(d));
	printf("Size of a float: %d byte(s)\n", (signed int) sizeof(f));
	return (0);
}
