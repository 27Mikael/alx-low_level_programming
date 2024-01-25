#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 *get_op_func - function that retrieves op func
 *@s: the element to evaluate
 *
 *Return: ) on failure
 */
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

int (*get_op_func(char *s))(int, int)
{
	while (ops[i].op == 0)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return(NULL);
}
