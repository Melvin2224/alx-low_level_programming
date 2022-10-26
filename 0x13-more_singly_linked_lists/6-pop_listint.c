#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this function deletes the head node of
 * a list and returns its data
 * @head: double pointer to head node
 *
 * Return: on success head nodes data, on error 1
 */
int pop_listint(listint_t **head)
{
	listint_t *move;
	int n;

	if (*head == NULL)
		return (0);
	move = *head;
	*head = (*head)->next;
	n = move->n;
	free(move);
	return (n);
}
