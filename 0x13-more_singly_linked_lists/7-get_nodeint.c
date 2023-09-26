#include "lists.h"

/**
 * get_nodeint_at_index - returns  node at a certain in the  list
 * @head: first node in the linked list
 * @index: index of the node to be returned  return
 *
 * Return: pointer to the node we are to return or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nineth_node = head;

	while (nineth_node && i < index)
	{
		nineth_node = nineth_node->next;
		i++;
	}

	return (nineth_node ? nineth_node : NULL);
}

