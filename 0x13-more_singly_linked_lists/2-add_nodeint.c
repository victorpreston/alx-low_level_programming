#include "lists.h"

/**********START*********/
/**
 *add_nodeint - funstion puts a new_node at the start
 *		of a linked list.
 *@head:pointer: shows the address for the head of the linked-list
 *@n:integer: shows new node
 *
 *Return:retturns empty list/NULL
 *	Or address of element in list
 *
 * ALX PROJECTS
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod_n;

	nod_n = malloc(sizeof(listint_t));
	/**Return NULL**/
	if (nod_n == NULL)
		return (NULL);

	nod_n->n = n;
	/**next new node**/
	nod_n->next = *head;

	*head = nod_n;

	return (nod_n);
}
/**********STOP*********/
