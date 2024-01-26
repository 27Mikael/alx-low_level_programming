#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function iterates over
 * @size: size of the array
 * @action: pointer tyo the function you need to use
 * @array: the array to iterate over
 *
 * Return: 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
