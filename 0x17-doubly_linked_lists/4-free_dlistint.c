#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - function that frees a list
 *
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
