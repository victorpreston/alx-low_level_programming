#include "lists.h"

/*******START******/
/**
 *sum_listint - adds up all the data in linked-list
 *@head: pointer: shows head of the list
 *
 *Return: returns sum of No.
 *
 * ALX PROJECTS
 */
int sum_listint(listint_t *head)
{
	int sum_no = 0;
	listint_t *nod_c = head;

	/**Loop**/
	while (nod_c != NULL)
	{
		sum_no += nod_c->n;
		nod_c = nod_c->next;
	}

	/**return sum**/
	return (sum_no);
}
/********STOP*******/
