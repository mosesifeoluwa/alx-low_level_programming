#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two nums
 * @a: first num
 * @b: second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub: returns the difference of two nums
 * @a: first num
 * @b: second num
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two nums
 * @a: first num
 * @b: second num
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns division of two nums
 * @a: first num
 * @b: second num
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of the division of two nums
 * @a: first num
 * @b: second num
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
