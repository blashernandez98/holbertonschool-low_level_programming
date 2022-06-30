#include "3-calc.h"
#include "3-op_functions.c"
#include "stddef.h"

/**
 * get_op_func - Selects correct function for operator.
 * @op: Operator character.
 * Return: Function pointer to operator function.
 */

int (*get_op_func(char *op))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if (ops[i].op == *op)
			return (ops[i].f);
	}
}
