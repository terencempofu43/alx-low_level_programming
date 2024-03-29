#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of
 * a listint_t list and returns its data.
 * @head: A pointer to the pointer to the head of the listint_t list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
