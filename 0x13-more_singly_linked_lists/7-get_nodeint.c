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
    listint_t *current;
	unsigned int count;

	current = malloc(sizeof(listint_t));
	current->n = head->n;
	current->next = head->next;
    count = -1;
    while (current != NULL)
    {
        count++;
        if (count == index)
        {
            return (current);
        }
        current = current->next;
    }
    
    
	return (current);
}