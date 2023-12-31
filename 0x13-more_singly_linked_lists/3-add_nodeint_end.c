#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *custom_new;
	listint_t *temp = *head;

	custom_new = malloc(sizeof(listint_t));
	if (!custom_new)
		return (NULL);

	custom_new->n = n;
	custom_new->next = NULL;

	if (*head == NULL)
	{
		*head = custom_new;
		return (custom_new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = custom_new;

	return (custom_new);
}

