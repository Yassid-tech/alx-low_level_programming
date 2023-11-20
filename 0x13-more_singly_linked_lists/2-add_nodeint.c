#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newOne;
newOne = *head;
newOne = malloc(sizeof(listint_t));
if (newOne == NULL)
return (NULL);
newOne->n = n;
newOne->next = *head;
*head = newOne;
return (*head);
}
