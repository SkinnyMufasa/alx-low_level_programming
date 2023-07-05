#include "lists.h"
/**
* listint_len - counts the number of elements in a linked listint_t list
* @h: listint_t list
*
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count;

	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

