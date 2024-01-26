#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: pointer to a function
 * Return - 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
