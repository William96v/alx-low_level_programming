#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *custom_temp;

	if (head == NULL)
		return;

	while (*head)
	{
		custom_temp = (*head)->next;
		free(*head);
		*head = custom_temp;
	}

	*head = NULL;
}

