#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - this function frees a linked list and
 * sets its head pointer to NULL
 * @head: double pointer to first node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *move, *aux;

	move = *head;
	if (*head != NULL)
	{
		while (move != NULL)
		{
			aux = move;
			move = move->next;
			free(aux);
		}
		*head = NULL;
	}
	else
	{
		*head = NULL;
	}
}
