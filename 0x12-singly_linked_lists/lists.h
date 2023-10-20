#ifndef H_LISTS
#define H_LISTS

/*********************************HEADER*******************************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 * ALX Projects
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);
size_t print_list(const list_t *h);

#endif
