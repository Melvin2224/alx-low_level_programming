#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this function prints out the elements
 * of the list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
