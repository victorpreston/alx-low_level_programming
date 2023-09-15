#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function: insert new node in given position
 *
 * @h: Pointer to the node
 * @idx: index of the list
 * @n: Data of new node
 *
 * Return: NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h, *nw;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}

	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = p;
	nw->next = p->next;
	p->next->prev = nw;
	p->next = nw;

	return (nw);
}
