#include "lists.h"

/**
 * free_listint - here we frees a linked list
 * @head: listint_t this is list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *custom_temp;

	while (head)
	{
		custom_temp = head->next;
		free(head);
		head = custom_temp;
	}
}

