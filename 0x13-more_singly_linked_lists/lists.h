#ifndef CUSTOM_LISTS_H
#define CUSTOM_LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct custom_list_node - singly linked list node
 * @data: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for custom project
 */
typedef struct custom_list_node
{
    int data;
    struct custom_list_node *next;
} custom_list_node_t;

size_t print_custom_list(const custom_list_node_t *head);
size_t custom_list_length(const custom_list_node_t *head);
custom_list_node_t *add_custom_node(custom_list_node_t **head, const int data);
custom_list_node_t *add_custom_node_end(custom_list_node_t **head, const int data);
void free_custom_list(custom_list_node_t *head);
void free_custom_list2(custom_list_node_t **head);
int pop_custom_list(custom_list_node_t **head);
custom_list_node_t *get_custom_node_at_index(custom_list_node_t *head, unsigned int index);
int sum_custom_list(custom_list_node_t *head);
custom_list_node_t *insert_custom_node_at_index(custom_list_node_t **head, unsigned int idx, int data);
int delete_custom_node_at_index(custom_list_node_t **head, unsigned int index);
custom_list_node_t *reverse_custom_list(custom_list_node_t **head);
size_t print_custom_list_safe(const custom_list_node_t *head);
size_t free_custom_list_safe(custom_list_node_t **head);
custom_list_node_t *find_custom_list_loop(custom_list_node_t *head);

#endif

