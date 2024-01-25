#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to be printed
 * Return - 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
