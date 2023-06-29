#include "lists.h"
/**
 * list_len - number of elements in a list_t list
 * @h: list_t lists
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	list_t *current;

	current = malloc(sizeof(list_t));
	current->str = h->str;
	current->len = h->len;
	current->next = h->next;
    while (current != NULL)
	{
		cnt++;
		current = current->next;
	}
	
	return (cnt);
}