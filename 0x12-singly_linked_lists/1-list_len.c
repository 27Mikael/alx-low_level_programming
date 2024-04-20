#include <stdlib.h>
#include "lists.h"

/**
 * list_len - measures the length of list
 * @h: pointer to the list_t list
 * Return: the number of elements in h
*/
size_t list_len(const list_t *h)
{
	size_t j = 0;
	/*iterate to the next list*/
	while (h != NULL)
	{
		/*increment that to the counter*/
		j++;
		h = h->next;
	}

	return (j);
}
