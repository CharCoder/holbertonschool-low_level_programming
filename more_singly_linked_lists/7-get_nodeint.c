#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to node
 * @index: index of the node
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_node = 0;

	while (get_node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		get_node++;
	}

	return (head);
}
