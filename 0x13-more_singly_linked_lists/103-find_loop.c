#include "lists.h"

/*******START*******/
/**
 * find_listint_loop - loop contained ina linked_list
 * @head:pointer: shows head of the-list.
 *
 * Return: No! loop - NULL.
 *         else - loop_starts.
 *
 * ALX PROJECTS
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tt = head, *rr = head;

	while (rr && rr->next)
	{
		tt = tt->next;
		rr = (rr->next)->next;

		if (tt == rr)
		{
			tt == head;
			while (tt != rr)
			{
				tt == tt->next;
				rr == rr->next;
			}
			return (tt);
		}
	}
	return (NULL);
}
/********STOP**************/
