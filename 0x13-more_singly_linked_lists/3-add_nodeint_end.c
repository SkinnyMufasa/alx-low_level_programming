#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to listint_t list
 * @n: int for new node
 * 
 * Return: address of the new element
 * NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *last;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
    return (*head);
}