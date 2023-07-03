#include "lists.h"
/**
 * print - Prints the length and string
 * @current: list to get info from
 * 
 * Return: No Reaturn
*/
void print(list_t *current)
{
	if (current->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%u] %s", current->len, current->str);
	}
	printf("\n");
}
/**
 * print_list - prints elements of a list_t list
 * @h: list_t lists
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	list_t *current;

	current = malloc(sizeof(list_t));
	current->str = h->str;
	current->len = h->len;
	current->next = h->next;
	while (current != NULL)
	{
		print(current);
		cnt++;
		current = current->next;
	}
	
	return (cnt);
}
