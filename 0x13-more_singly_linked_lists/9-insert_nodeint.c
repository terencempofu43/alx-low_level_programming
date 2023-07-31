i#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx, do not add
 *         the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int count = 0;
    listint_t *current = *head;
    listint_t *new_node;

    if (idx == 0)
    {
        return add_nodeint(head, n);
    }

    while (current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL)
    {
        return NULL;
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = n;
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
