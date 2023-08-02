#include "lists.h"
#include <stdlib.h>

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
		while (pointer != NULL)
		{
			nod_c = pointer->next;
			free(pointer);
			pointer = nod_c;
		}

		*head = NULL;
	}
}
/**********STOP***********/
