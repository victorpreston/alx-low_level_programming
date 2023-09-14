#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - functions: adds new node at start of dlistint_t list
 *
 * @head: Double pointer to the head of the list
 * @n: This is the node to be added
 *
 * Return: NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;
	return (n_node);
}
