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
	listint_t *pointer = head;

	do {
		nod_c = pointer->next;
		free(pointer);
		pointer = nod_c;
	} while (pointer != NULL);
}
/***********STOP***********/
