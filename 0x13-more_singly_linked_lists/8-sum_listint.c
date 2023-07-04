#include "lists.h"
/**
* sum_listint - sum of all the data (n) of a link list
* @head: linked list
*
* Return: sum of data
*/
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;
	
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
