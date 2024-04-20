#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end of list_t
 * @head: pointer to the head node
 * @str: pointer to the string to duplicate
 *
 * Return: address of new node or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/*store the head reference in a temp var*/
	list_t *new_node;
	list_t *temp = *head;

	/*create a new node & allocate memory*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*set pointer of new node as NULL since it is last*/
	/*if list_t is empty make new node as head and return*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*else traverse till last node*/
	while (temp->next)
		temp = temp->next;

	/*change pointer of last node to the new node*/
	temp->next = new_node;

	return (new_node);
}
