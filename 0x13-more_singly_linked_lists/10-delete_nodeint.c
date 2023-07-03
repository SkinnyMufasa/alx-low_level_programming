#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @*head: listint_t
 * @index: node to delete
 * 
 * Return: 1 Succes
 * -1 failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = NULL;
	listint_t *previous = NULL;
	unsigned int i = 0;
    unsigned int list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
    {
		return (-1);
    }
	while (head != NULL)
	{
		if (i == index)
		{
			old = *head;
			if (i == 0)
			{
				*head = old->next;
				free(old);
				return (1);
			}
			previous->next = old->next;
			free(old);
			return (1);
		}
		else if ((i + 1) == index)
        {
			previous = *head;
        }
		head = &((*head)->next);
		i++;
	}
	return (-1);
}
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count += 1;
		current = current->next;
	}
	return (count);
}