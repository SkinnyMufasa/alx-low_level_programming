#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list
* @h: listint_t list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
