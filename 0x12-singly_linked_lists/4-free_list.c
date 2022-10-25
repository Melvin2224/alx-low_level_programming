#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees list_t
 * @head: pointer to first node
 *
 * Retutn: nothing
 */
void free_list(list_t *head)
{
	list_t *move, *aux;

	move = head;
	while (move != NULL)
	{
		aux = move;
		move = move->next;
		free(aux);
	}
}
