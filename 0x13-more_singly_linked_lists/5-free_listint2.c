#include "lists.h"
/**
 * free_listint2 - function name
 * @head: A pointer to a pointer to the head of the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
