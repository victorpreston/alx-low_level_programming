#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node from list
 *
 * @head: Pointer, to the head of the list
 * @index: index of the node to delete
 *
 * Return: On success - 1.
 *         Elsewhere - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (p == NULL)
			return (-1);
		p = p->next;
	}

	if (p == *head)
	{
		*head = p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		p->prev->next = p->next;
		if (p->next != NULL)
			p->next->prev = p->prev;
	}

	free(p);
	return (1);
}
