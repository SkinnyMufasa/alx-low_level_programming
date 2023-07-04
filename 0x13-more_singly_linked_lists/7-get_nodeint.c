#include "lists.h"
/**
* get_nodeint_at_index - finds the n'th node of a listint_t linked list
* @head: linked list
* @index: The index of the node
*
* Return: The node found
* NULL if node is non-existant
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int count;

	while (head != NULL)
	{
		if (count <= index)
		{
			if (count == index)
			{
				current = head;
				break;
			}
			head = head->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	return (current);
}
