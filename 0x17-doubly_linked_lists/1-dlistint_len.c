#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - function: Returns No. of elmnts in dlistint_t list
 *
 * @h: Pointer: shows to the head of the linked list
 *
 * Return: Returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_c = 0;

	if (h == NULL)
		return (node_c);

	while (h != NULL)
	{
		node_c++;
		h = h->next;
	}

	return (node_c);
}
