#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp && temp->next)
	{
		temp = temp->next;
		free(temp->prev);
	}

	if (temp)
		free(temp);
}
