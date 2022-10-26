#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - This function returns a specific node
 * @head: pointer to first node
 * @index: index of node to be returned
 *
 * Return: on success node at specified index, on error NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *current2;
	int i, len;
	 
	i = 1;
	current = head;
	current2 = head;
	while (current != NULL)
	{
		current = current->next;
		len += 1;
	}
	if (index > len)
		return (NULL);
	while (i < index)
	{
		current2 = current2->next;
		i += 1;
	}
	return (current2);
}
