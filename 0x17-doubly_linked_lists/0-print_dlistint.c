#include "lists.h"

/**
 * print_dlistint - function: Print all the elements of dlistint_t list
 *
 * @h: Pointer- shows  to the head of the list
 *
 * Return: Returns the No. of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int c_t = 0;

	if (h == NULL)
		return (c_t);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c_t++;
	}

	return (c_t);
}
