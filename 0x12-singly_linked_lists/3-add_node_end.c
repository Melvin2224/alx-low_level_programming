#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - this function adds a new node at the end of a list
 * @head: pointer to pointer to first node
 * @str: string value for nodes
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	while (head != NULL)
	{
		head = head->next;
	}
	ptr->next = NULL;
	head = ptr;
	return (ptr);
}
