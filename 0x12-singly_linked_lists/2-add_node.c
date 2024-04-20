#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of linked list
 * @head: pointer to the list_t list
 * @str: pointer to the str to be added
 *
 * Return: return NULL if failed or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	/*Allocate memory for the new node.*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/*Put our data into the new node.*/
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	/*Set Next of the new node to point to the previous Head.*/
	for (len = 0; str[len]; len++)
		;

	/*Reset Head to point to the new node.*/
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
