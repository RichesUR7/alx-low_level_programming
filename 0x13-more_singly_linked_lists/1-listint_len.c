#include "lists.h"
/**
 * listint_len - function name
 * @h: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
