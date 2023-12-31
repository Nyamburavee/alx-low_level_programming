#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Pointer to a pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}
