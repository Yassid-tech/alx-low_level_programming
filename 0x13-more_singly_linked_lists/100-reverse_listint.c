#include "lists.h"

/**
 * reverse_listint - function with one argument
 * @head: pointer to head pointer of linked list
 *
 * Description: reverses a linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *linker;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
previous = *head;
linker = previous->next;
*head = linker->next;
previous->next = NULL;
while ((*head)->next != NULL)
{
linker->next = previous;
previous = linker;
linker = (*head);
*head = (*head)->next;
}
(*head)->next = linker;
linker->next = previous;
return (*head);
}
