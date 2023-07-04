#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: Pointer to heade node
*
* Return: No Return
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			free(current);
			*head = (*head)->next;
		}
		*tmp = NULL;
	}
}
