#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - print doubly linked list
* @h: head of doubly linked list
*
* Return: Number of Node in the doubly linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t ret = 0;
    dlistint_t current = head;

    if (current == NULL)
	return (ret);

    while (current->next != NULL)
    {
	prinf("%d\n", current->n);
	current = current->next;
	ret++;
    }
    return (ret);
}
