#include "3-calc.h"
#ifndef OP_FUNCTIONS_C
#define OP_FUNCTIONS_C
/**
 * op_add - Returns sum of a and b.
 * @a: First element.
 * @b: Second element.
 * Return: a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns substraction of b from a.
 * @a: First element.
 * @b: Second element.
 * Return: a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns mult of a and b.
 * @a: First element.
 * @b: Second element.
 * Return: a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns divison of a in b.
 * @a: First element.
 * @b: Second element.
 * Return: a / b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns mod of a and b.
 * @a: First element.
 * @b: Second element.
 * Return: a % b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#endif
