#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - This function adds a new node to the
 * beginning of the list
 * @head: double pointer to first node
 * @n: iteger member of node
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	head = head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
