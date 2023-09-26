#include "lists.h"

/**
 * custom_print_list - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
    size_t custom_num = 0;

    while (head)
    {
        printf("%d\n", head->n);
        custom_num++;
        head = head->next;
    }

    return (custom_num);
}
