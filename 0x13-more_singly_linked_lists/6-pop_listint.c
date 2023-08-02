#include "lists.h"

/************START**************/
/**
 * pop_listint - functions deletes head_for_the node
 *
 * @head:pointer: shows the first node in the list
 *
 * Return:check whether lists is empty on not
 * 	Returns 0 when null or data (n)	
 *
 * ALX PROJECTS
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int node_data;

	if (*head == NULL)
		return (0);
	node_to_delete = *head;
	node_data = (*head)->n;
	*head = (*head)->next;

	free(node_to_delete);

	return (node_data);
}
/************STOP****************/
