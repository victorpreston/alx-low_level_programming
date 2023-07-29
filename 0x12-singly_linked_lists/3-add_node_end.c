#include "lists.h"

/*****************************START*****************************/

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add to the new node in the list
 *
 * Return: the address of the new element, Null if failure occurs.
 *
 * ALX PROJECTS
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	size_t len;

	/**Check if String is NULL**/

	if (str == NULL)
		return (NULL);
	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	
	nnode->str = strdup(str);

	/**Check**/

	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		/*******Find Length of String*******/
	}
	nnode->len = len;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
	}
	else if ((*head)->next == NULL)
	{
		(*head)->next = nnode;
	}
	else
	{
		/*Recursive Call*/
		add_node_end(&((*head)->next), str);
	}
	return (nnode);
}
