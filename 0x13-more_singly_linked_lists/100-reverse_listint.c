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
	listint_t *n_node, *prevv;

	if (head == NULL || *head == NULL)
		return (NULL);

	prevv = NULL;/**Initialize previous node to (0)**/

	while ((*head)->next != NULL)
	{
		n_node = (*head)->next;
		(*head)->next = prevv;
		prevv = *head;
		*head = n_node;
	}

	(*head)->next = prevv;

	return (*head);
}
/***************STOP**************/
