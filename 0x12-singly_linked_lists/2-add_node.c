#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the first list_t
 * @str: Pointer to the string of the new list_t
 * 
 * Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
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
    new->len = _strlen(new->str);

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