#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - function returns No. of elements
 *		in a linked-list
 *@h:pointer: shows to the head of the list
 *
 *
 *Return: No. of elements in the linked list
 *
 * ALX PROJECTS
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t nod_s = 0;

	while (pointer)
	{
		nod_s++;
		pointer = pointer->next;
	}
	return (nod_s);
}
/***********************STOP********************/
