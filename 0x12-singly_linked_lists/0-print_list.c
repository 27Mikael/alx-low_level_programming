#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints the list
 * @h: pointer to the list_t to print
 *
 * Return: the number of nodes in the list
*/
/* Function to print all elements of a list_t list */
size_t print_list(const list_t *h)
{
	/* initialiZe */
	const list_t *current = h;
	size_t count = 0;

	printf("[");

	/* Iterate through the list */
	while (current)
	{
		/* Print the string of the current node */
		if (!current->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}

		count++;
		current = current->next;
	}

	return (count);
}
