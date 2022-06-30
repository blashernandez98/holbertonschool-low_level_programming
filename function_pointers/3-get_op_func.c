#include "3-calc.h"
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
	int i = 0;

	while (i < 5)
	{
		if (ops[i].ch[0] == *op)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
