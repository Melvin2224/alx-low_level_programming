#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - this function adds a new node at the beginning
 * of the list
 * @head: pointer to pointer to first node
 * @str: string to be stored in first node
 *
 * Return: address of new element on success
 * on error NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	head = head;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
