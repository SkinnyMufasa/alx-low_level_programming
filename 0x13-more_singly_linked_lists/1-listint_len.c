#include "lists.h"
/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: listint_t list
 * 
 * Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
    listint_t *current;
	size_t count;

	count = 0;
	current = malloc(sizeof(listint_t));
	current->n = h->n;
	current->next = h->next;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}