#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return and  the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t my_n = 0;

	while (h)
	{
		my_n++;
		h = h->next;
	}
	return (my_n);
}

