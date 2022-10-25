#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function frees a listint list
 * @head: pointer to first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *move, *old;

	move = head;
	while (move != NULL)
	{
		old = move;
		move = move->next;
		free(old);
	}
}
