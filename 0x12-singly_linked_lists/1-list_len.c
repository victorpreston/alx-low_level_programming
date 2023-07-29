#include "lists.h"

/**
 * list_len - Locate the No of elements linked-list
 * @h: pointer - shows to the list
 *
 * Return: returns No of elements count
 *
 * ALX PROJECTS
 */

size_t list_len(const list_t *h)
{
	const list_t *pointer = h;
	size_t count_nod = 0;

	for (; pointer != NULL; pointer = pointer->next)
	{
		count_nod++;
	}
	return (count_nod);
	/**return the number of nodes**/
}
/******STOP********/
