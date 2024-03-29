#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev = NULL;

	if (*head == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;

		prev = current;

		current = next;
	}

	*head = prev;
	return (*head);
}
