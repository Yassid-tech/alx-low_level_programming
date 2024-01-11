#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the address of the head of the doubly linked list
 * @index: Index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (*head == NULL)
return (-1);
dlistint_t *current = *head;
unsigned int count = 0;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
while (current != NULL && count < index)
{
current = current->next;
count++;
}
if (current == NULL)
return (-1);
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
