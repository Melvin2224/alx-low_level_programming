#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - This function returns the number of nodes in a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != 0)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
