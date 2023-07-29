#include "lists.h"
#include <stdio.h>

/******************START*************************/
/**
 *add_node: This will add a nod at start  of a list.
 *@head: shows/opens the head of the list.
 *@str: string to be added as node to list.
 *
 * Return:new element/ NULL if element fails.
 *
 * ALX PROJECTS
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *added;

	for (len = 0; str != NULL && str[len] != '\0'; len++)
	{
		/**********implement len untill NULL- terminal is reached*****/
	}

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);
	/**I will initialize and find Null if head is NUll**/
	if (*head == NULL)
		added->next = NULL;
	else
		added->next = *head;

	/**Now I will try to add it**/
	added->str = strdup(str);
	added->len = len;
	*head = added;

	/**
	 * This should now return head (*head)
	 * If the code is successfull
	 */

	return (*head);
}
/*********************STOP******************/
