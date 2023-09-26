#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to the first element iside the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *custom_temp;
	int custom_num;

	if (!head || !*head)
		return (0);

	custom_num = (*head)->n;
	custom_temp = (*head)->next;
	free(*head);
	*head = custom_temp;

	return (custom_num);
}
