#include "lists.h"

/***********START**********/
/**
 * insert_nodeint_at_index - function- adds new_node to
 *                           list at a given position.
 * @head:pointer -shows address of the
 *        head-list.
 * @idx: list where the new
 *       indices start at 0(zero).
 * @n:integer: contained in the new node
 *
 * Return: function fails - NULL.
 *         else - addr of the new-node.
 *
 * ALX PROJECTS
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nod_c = 0;
	listint_t *nod_n;
	listint_t *nod_current;

	/****Check whether NULL****/
	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		nod_n = malloc(sizeof(listint_t));
		if (nod_n == NULL)
			return (NULL);
		nod_n->n = n;
		nod_n->next = *head;
		*head = nod_n;
		return (nod_n);
	}
	nod_current = *head;
	while (nod_current != NULL)
	{
		if (nod_c == idx -1)
		{
			nod_n = malloc(sizeof(listint_t));
			if (nod_n == NULL)
				return (NULL);
			nod_n->n = n;
			nod_n->next = nod_cuurent->next;
			nod_current->next = nod_n;

			return (nod_n);
		}

		nod_current = nod_current->next;
		nod_c++;
	}

	return (NULL);
}
