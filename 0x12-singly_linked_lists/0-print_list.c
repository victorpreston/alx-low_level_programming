#include "lists.h"

/**START**/

/**
 * print_list - printing elements of a list
 *
 * @h: pointer: shows to head first node
 *
 * Return: Shows the No of nodes
 *
 * ALX Projects.
*/

size_t print_list(const list_t *h)
{
	/*pointer approach*/
	const list_t *pointer = h;
	size_t node_count = 0;
	/*nodes counted*/
	if (pointer == NULL)
		return (0);

	while (pointer->next != NULL)
	{
		/*I will get this right*/
		if (pointer->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", pointer->len, pointer->str);

		/*pass_node*/
		pointer = pointer->next;
		/*node_count*/
		count_nod += 1;
	}
	/************last_node*********/
	printf("[%d] %s\n", pointer->len, pointer->str);

	return (count_nod);
}
/**STOP**/
