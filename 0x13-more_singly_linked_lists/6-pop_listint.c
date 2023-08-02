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
	listint_t *nod_t;
	listint_t *top = *head;
	int nod_cont;
	/**check for null**/
	if (*top == NULL)
		return (0);

	nod_t = top;
	nod_cont = (*top)->n;
	top = (top)->next;
	free(nod_t);

	return (nod_cont);
}
/************STOP****************/
