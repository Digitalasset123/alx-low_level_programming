#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform an operation.
 * @s: The operator passed as argument to the program.
 *
 * Return: A pointer to the function that corresponds to the operator
 * given as a parameter. NULL if no such operator exists.
 */
int (*get_op_func(char *s))(int, int)
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

	/* initialize i */
	i = 0;

	/* s does not match any of the operands */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /* return operation */
}
