#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *custom_temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(custom_temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!custom_temp || !(custom_temp->next))
			return (-1);
		custom_temp = custom_temp->next;
		j++;
	}


	current = custom_temp->next;
	custom_temp->next = current->next;
	free(current);

	return (1);
}

