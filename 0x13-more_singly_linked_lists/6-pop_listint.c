#include "lists.h"

/**
 * pop_listint - Removes the first element of a linked list.
 * @head: Pointer to the first element in the linked list.
 *
 * Return: The data contained in the removed element,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *remove_node;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	remove_node = (*head)->next;
	free(*head);
	*head = remove_node;

	return (num);
}
