#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - func that will check for int
 * @array: array to check
 * @cmp: function that will check
 * @size: number of elements in an array
 * Return: -1 did not work
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
