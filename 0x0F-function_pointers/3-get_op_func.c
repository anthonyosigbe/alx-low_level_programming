#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Retrieves the appropriate arithmetic operation function,
 * based on the provided operator.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding,
 *  to the provided operator, or NULL if not found.
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

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
