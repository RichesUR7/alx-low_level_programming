#include "lists.h"
/**
 * free_listint - function name
 * @head: The pointer to the head of the
 * listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
