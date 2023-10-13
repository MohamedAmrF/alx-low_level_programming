#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int ret = 0;
	dlistint_t *current = (dlistint_t *)h;
	
	if (h != NULL)
		return (ret);
	while (current)
	{
		current = current->next;
		ret++;
	}
	return (ret);
}
