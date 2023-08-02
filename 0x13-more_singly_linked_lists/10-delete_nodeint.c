#include "lists.h"
#include <std.io>
#include <stdlib.>


/******START*****/
/**
 * delete_nodeint_at_index - deletes a node at particular or an  index
 * @head:pointer: show the head of_list
 * @index: index of added nod.
 *
 * Return:Node address
 *
 * ALX PROJECTS
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *node_c = *head;
	unsigned int nod;

	/*****Check if null*****/
	if (node_c == NULL)
		return (0);
	/**
	 * On success - 1.
	 * On failure - 0
	 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(node_c);
		return (1);
	}
	for (nod = 0; nod < index - 1; nod++)
	{
		if (node_c->next == NULL)
			return (-1);
		node_c = node_c->next;
	}

	/***Compare***/
	temp = node_c->next;
	node_c->next = temp->next;
	free(temp);
	/****return****/

	return (1);
}
/****************STOP***************/
