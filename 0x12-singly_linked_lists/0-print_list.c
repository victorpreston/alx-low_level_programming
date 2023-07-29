#include "lists.h"

/**
 * print_list - elements of a list
 *
 * @h: pointer - points to the list
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *pointer = h;
	size_t count_nod = 0;

	/**Handle an empty list**/
	if (pointer == NULL)
		return (0);
	do {
		if (pointer->str != NULL)
			printf("[%d] %s\n", pointer->len, pointer->str);
		else
			printf("[0] (nil)\n");
		count_nod++;
		pointer = pointer->next;
	} while (pointer != NULL);
	return (count_nod);
}
