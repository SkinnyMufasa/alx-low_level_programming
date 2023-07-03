#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t list
 * 
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *current;
	size_t count;

	count = 0;
	current = malloc(sizeof(listint_t));
	current->n = h->n;
	current->next = h->next;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}