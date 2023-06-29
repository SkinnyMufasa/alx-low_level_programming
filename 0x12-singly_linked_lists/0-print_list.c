#include "lists.h"
/**
 * print_list - prints elements of a list_t list
 * @h: list_t lists
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	unsigned int len;
	char *str;
	
	while (h != NULL)
	{
		len = h.len;
		str = h.str;
		print("[%u] %s\n", len, str);
		cnt++;
	}
	return (cnt);
}
