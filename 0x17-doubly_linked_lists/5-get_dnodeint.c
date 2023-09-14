#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*******************************START*******************************/
/**
 * get_dnodeint_at_index - function to locate a node in a list
 *
 * @head: Pointer: head of the list
 * @index: Pointer: the node
 *
 * Return: Node not exist - NULL.
 *         Elsewhere - Address of identified node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
