#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newOne, *current;
newOne = malloc(sizeof(listint_t));
if (newOne == NULL)
return (NULL);
newOne->n = n;
newOne->next = NULL;
if (*head == NULL)
{
*head = newOne;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = newOne;
return (*head);
}
