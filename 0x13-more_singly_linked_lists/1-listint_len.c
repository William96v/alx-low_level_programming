#include "custom_lists.h"

/**
 * custom_print - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint(const listint_t *head)
{
	size_t custom_num = 0;

	while (head)
	{
		custom_num++;
		head = head->next;
	}

	return (custom_num);
}
