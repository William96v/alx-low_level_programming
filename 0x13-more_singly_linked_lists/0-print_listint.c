#include "custom_lists.h"

/**
 * custom_print_list - prints all the elements of a linked list
 * @head: linked list of type custom_list_node_t to print
 *
 * Return: number of nodes
 */
size_t custom_print_list(const custom_list_node_t *head)
{
    size_t num = 0;

    while (head)
    {
        printf("%d\n", head->data);
        num++;
        head = head->next;
    }

    return (num);
}

