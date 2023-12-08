#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of node the to return
 * Return: nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		count++;
		head = head->next;
	}

	return (NULL);
}
