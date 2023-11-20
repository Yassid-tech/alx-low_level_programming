#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *current, *newOne;
current = *head;
newOne = malloc(sizeof(listint_t));
if (newOne == NULL)
return (NULL);
newOne->n = n;
if (index == 0)
{
newOne->next = current;
*head = newOne;
return (*head);
}
while (index > 1)
{
current = current->next;
index--;
if (!current)
{
free(newOne);
return (NULL);
}
}
newOne->next = current->next;
current->next = newOne;
return (newOne);
}
