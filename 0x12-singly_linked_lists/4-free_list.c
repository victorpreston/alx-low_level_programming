#include "lists.h"

/*****************************START******************************/
/**
 * free_list - This function will free a list
 * @head: pointer to the list head
 *
 * ALX PROJECTS
 */

void free_list(list_t *head)
{
	list_t *now;

	do {
		now = head->next;
		free(head->str);
		free(head);

		head = now;
	} while (head != NULL);
}
/****************************STOP*******************************/
