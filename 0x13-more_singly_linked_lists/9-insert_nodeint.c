#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *custom_new;
	listint_t *custom_temp = *head;

	custom_new = malloc(sizeof(listint_t));
	if (!custom_new || !head)
		return (NULL);

	custom_new->n = n;
	custom_new->next = NULL;

	if (idx == 0)
	{
		custom_new->next = *head;
		*head = custom_new;
		return (custom_new);
	}

	for (j = 0; custom_temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			custom_new->next = custom_temp->next;
			custom_temp->next = custom_new;
			return (custom_new);
		}
		else
			custom_temp = custom_temp->next;
	}

	return (NULL);
}

