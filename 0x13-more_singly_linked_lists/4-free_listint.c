#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the beginning of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
