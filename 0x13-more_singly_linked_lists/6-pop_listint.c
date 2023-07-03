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
    listint_t *current = *head;
    listint_t *next;
    int n;

    if (current == NULL)
    {
        n = 0;
    }
    else
    {
        next = current->next;
        n = current->n;
        free(head);
        *head = next;
    }
    return (n);
}