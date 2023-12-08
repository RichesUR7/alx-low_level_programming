#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to add to the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		new_node->next = NULL;
		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}
