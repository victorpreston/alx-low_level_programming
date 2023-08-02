#include "lists.h"


/***********START************/
/**
 * reverse_listint - Reversing a linked list.
 * @head:pointer: shows the address of
 *        the head of the list_t list.
 *
 * Return:pointer-shows the first node of reversed list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevv = NULL, *current = *head, *n_node;

	/***Loop***/
	while (current != NULL)
	{
		n_node = current->next;
		current->next = prevv;
		prevv = current;
		current n_node;
	}

	*head = prevv; /*Update the head*/
	return (*head);
}
