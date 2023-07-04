#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: linked lits
* @idx: position
* @n: data of new node
*
* Return : Address of the new node
* NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new = (listint_t*)malloc(sizeof(listint_t));
	unsigned int currentidx = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (current != NULL && currentidx < idx - 1)
		{
			current = current->next;
			currentidx++;
		}

		if (current == NULL)
		{
			return (NULL);
		}
		new->next = current->next;
		current->next = new;
	}

	return (*head);
}

