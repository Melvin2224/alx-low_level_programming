#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at th e end of a list
 * @head: double pointer to first node
 * @n: data member of nodes
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *move;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	move = *head;
	while (move->next != NULL)
		move = move->next;
	move->next = ptr;
	return (ptr);
}
