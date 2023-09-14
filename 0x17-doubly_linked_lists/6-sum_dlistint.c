#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * sum_dlistint - Function: sums components of a list
 *
 * @head: Pointer, shows head of the list
 *
 * Return: Sum of components
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
