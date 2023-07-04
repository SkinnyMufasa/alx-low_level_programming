#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to pointer to head listint_t
*
* Return: Head node data
* if link is empty 0
*/
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (*head == NULL)
	{
		n = 0;
	}
	else
	{
		next = *head;
		n = next->n;
		free(next);
		*head = (*head)->next;
	}
	return (n);
}
