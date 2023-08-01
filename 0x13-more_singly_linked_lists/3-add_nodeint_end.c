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
	listint_t *pointer = *head;
	/**Initialize new node**/
	listint_t *nod_n;

	nod_n = malloc(sizeof(listint_t));
	if (nod_n == NULL)
		return (NULL);
	nod_n->n = n;
	nod_n->next = NULL;

	pointer != NULL ? (void)(while (pointer->next != NULL) pointer = pointer->next) : (*head = nod_n);
	pointer != NULL ? (pointer->next = nod_n) : (*head = nod_n);

	return (nod_n);
}
/*********STOP********/
