#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a newh node at a given position.
 * @h: pointer to head add
 * @idx: index  starts at 0
 * @n: number to be added
 *
 * Return: the address of the newh node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newh, *temp = *h;
	unsigned int count = 0;

	if (!temp && idx > 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (count != idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newh = malloc(sizeof(dlistint_t));
	if (!newh)
		return (NULL);

	newh->n = n;
	newh->prev = temp->prev;
	newh->next = temp;
	temp->prev->next = newh;
	temp->prev = newh;

	return (newh);
}
