#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - This function returns the length of a list
 * @h: pointer to first node
 *
 * Return: NUMBER OF NODES
 */
size_t listint_len(const listint_t *h)
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
