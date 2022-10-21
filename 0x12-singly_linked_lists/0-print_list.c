#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * and returns the number of nodes in the list
 * @h: head pointer to first node
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{

	int count;

	count = 0;
	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count += 1;
	}
	return (count);
}
