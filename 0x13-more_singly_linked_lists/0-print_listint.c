#include "lists.h"

/**
 * print_listint - prints-all elements of a linked  list
 *
 * @h: pointer: shows to first node
 *
 * Return: Returns the No. of nodes in list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t nod = 1;

	/*empty_list*/
	if (pointer == NULL)
		return (0);

	while (pointer->next != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		nod++;
	}

	printf("%d\n", pointer->n);

	return (nod);
}
/***************************************STOPR****************************/
