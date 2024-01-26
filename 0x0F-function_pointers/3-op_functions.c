#include <stdio.h>
#include "function_pointers.h"

/**
 *op_add - returns the sum of a, b
 *@a: value to add
 *@b: other val to add
 *
 *Return: sum(int a, int b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns the difference of a, b
 *@a: value to subtract from
 *@b: value to subtract
 *
 *Return: dif(int a, int b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns a*b
 *@a: multiplied val
 *@b: multiplier
 *
 *Return: mul(a*b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the result of a / b
 *@a: value to be divided
 *@b: the divider
 *
 *Return: div(a / b)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns (a % b)
 *@a: the val of a
 *@b:the val of b
 *
 *Return: (a % b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
