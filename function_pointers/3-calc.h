#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op.
 * @ch: Operator.
 * @f: Function of operator.
 */

typedef struct op
{
	char *ch;
	int (*f)(int a, int b);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

int (*get_op_func(char *))(int, int);
#endif
