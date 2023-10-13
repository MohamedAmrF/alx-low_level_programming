#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head add
 * @idx: index  starts at 0
 * @n: number to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}
