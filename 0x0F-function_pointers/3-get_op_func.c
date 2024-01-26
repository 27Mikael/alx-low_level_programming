#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that retrieves op func
 * @s: the element to evaluate
 *
 * Return: pointer to function, NULL on failure
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sun},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
