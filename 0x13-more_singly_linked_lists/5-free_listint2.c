#include "lists.h"

/***********START**********/
/**
 * free_listint2 - Free list.
 * @head:pointer:-show to the address of the
 *        head of the linked-list.
 *
 * Return: Sets the head to NULL.
 *
 * ALX PROJECTS
 */
void free_listint2(listint_t **head)
{
	listint_t pointer;
	listint_t **nod_c = head;

	/**Check whether NULL**/
	if (nod_c == NULL)
		return;

	while (*head)
	{
		pointer = (*head)->next;
		free(*head);
		*head = pointer;
	}

	nod_c = NULL;
}
/**********STOP***********/
