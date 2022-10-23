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
	free(head);
}
