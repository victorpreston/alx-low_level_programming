#include "lists.h"

/**
 * ****** ALX PROJECTS******
 *
 * print_list - prints elements of linked-list
 *
 * @h: pointer -shows to head first node
 *
 * Return: The No of nodes counted
*/

size_t print_list(const list_t *h)
{
	size_t count_nod = 1;

	/*nodes*/
	if (h == NULL)
		return (0);

	do {
		switch (h->next == NULL) {
			case 0:
				if (h->str == NULL)
					printf("[%d] %s\n", 0, "(nil)");
				else
					printf("[%d] %s\n", h->len, h->str);

				h = h->next;
				count_nod += 1;
				break;
			default:
				printf("[%d] %s\n", h->len, h->str);
				count_nod += 1;
		}
	} while (h->next != NULL);

	return (count_nod);
}
