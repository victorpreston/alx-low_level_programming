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
	listint_t *pointer;
	listint_t *nod_c;

	if (head != NULL)
	{
		pointer = *head;
		while ((nod_c = pointer) != NULL)

			pointer = pointer->next;
			free(nod_c);
		}

		*head = NULL;
	}
}
/**********STOP***********/
