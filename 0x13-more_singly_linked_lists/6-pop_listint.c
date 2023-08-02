#include "lists.h"

/************START**************/
/**
 * pop_listint - functions deletes head_for_the node
 *
 * @head:pointer: shows the first node in the list
 *
 * Return:check whether lists is empty on not
 * 	Returns 0 when null or data (n)	
 *
 * ALX PROJECTS
 */

int pop_listint(listint_t **head)
{
	listint_t *nod_c;
	int nod_cont;

	if (*head == NULL)
		return (0);

	nod_c = *head;
	nod_cont = (*head)->n;
	*head = (*head)->next;

	free(nod_c);

	return (nod_cont);
}
/************STOP****************/
