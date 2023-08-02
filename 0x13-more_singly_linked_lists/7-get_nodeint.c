#include "lists.h"

/************START************/
/**
 * get_nodeint_at_index - Finds node at *index_nth from-list
 *
 * @head:pointer: shows  to the first node in list
 * @index:Number of nodes to access
 *
 * Return: node at nth_index/NULL with no node.
 *
 * ALX PROJECTS
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nod_c = 0;
	listint_t *nod_n = head;

	/****Loop****/
	while (nod_n != NULL)
	{
		if (nod_c == index)
			return (nod_n);
		nod_n = nod_n->next;
		nod_c++;
	}
	/**Check on index value**/
	return (NULL);
}
