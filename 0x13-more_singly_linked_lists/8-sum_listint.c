#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - This function returns the sum of all node data
 * @head: pointer to first node
 *
 * Return: on success sum, on error 0;
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
