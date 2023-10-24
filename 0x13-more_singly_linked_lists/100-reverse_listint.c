#include "lists.h"
/**
 * reverse_listint - function name
 * @head: A pointer to a pointer to the head of
 * the listint_t list
 * Return: A pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
