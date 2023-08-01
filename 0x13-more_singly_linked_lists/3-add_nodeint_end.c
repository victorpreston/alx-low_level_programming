#include "lists.h"
#include <stdlib.h>

/********START*******/
/**
 *add_nodeint_end - adds_a_node at end of linked-list
 *@head:pointer: shows head of the list.
 *@n:integer: used as content
 *
 *
 *Return: shows address of new_node
 *
 * ALX PROJECTS
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/**
	 * nod_s = new node.
	 * pointer = *head.
	 */
	listint_t *nod_s;
	listint_t *pointer = *head;

	nod_s = malloc(sizeof(listint_t));

	/**check for empty list**/
	if (nod_s != NULL)
	{
		nod_s->n = n;
		nod_s->next = NULL;
	}
	else
		return (NULL);
	if (pointer != NULL)
	{
		for (; pointer->next != NULL; pointer = pointer->next)
		{
			/**Loop to find the last node**/
		}
		nod_s->next = nod_s;
	}

	/**set head to new node**/
	else
	{
		*head = nod_s;
	}
	return (nod_s);
}
/*********STOP********/
