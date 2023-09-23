#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees my linked list from bondage
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *new_temp;

	while (head)
	{
		new_temp = head->next;
		free(head->str);
		free(head);
		head = new_temp;
	}
}

