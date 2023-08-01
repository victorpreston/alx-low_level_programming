#iclude "lists.h"

/**************START***************/

/**
 * print_listint - printsall the elements in a linked list
 *
 * @h: pointer: shows the first node
 *
 * Return: returns the No of nodeds in the list_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t nod = 0;

	/***Do.....While loop****/
	do {
		nod++;
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	} while (pointer);

	return (nod);
}
/**************STOP***************/
