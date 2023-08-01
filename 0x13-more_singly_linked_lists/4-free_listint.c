#include "lists.h"


/***********START*********/
/**
 * free_listint - function shows a free list
 *
 * @head:pointer: -shows node_one of the list
 *
 * Return: Always 0
 *
 * ALX PROJECTS
 */

void free_listint(listint_t *head)
{
	listint_t *nod_c;
	/**Loop**/

	do {
		nod_c = head->next;
		free(head);
		head = nod_c;
	} while (head != NULL);
}
/***********STOP***********/
