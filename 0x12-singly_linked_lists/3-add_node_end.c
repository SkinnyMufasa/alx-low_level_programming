#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the previous list_t
 * @str: pointer to next list_t
 * 
 * Return: Address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *current;

    new = (list_t *)malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->str = (char *)malloc((_strlen(str) + 1) * sizeof(char));
    new->str = strdup(str);
    new->len = malloc(sizeof(int));
    new->len = _strlen(new->str);
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new;
    }
    return (new);
}