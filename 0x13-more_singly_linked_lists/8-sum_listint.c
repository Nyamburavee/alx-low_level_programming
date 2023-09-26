#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return:  sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *data_sum = head;

	while (data_sum)
	{
		sum += data_sum->n;
		data_sum = data_sum->next;
	}

	return (sum);
}

