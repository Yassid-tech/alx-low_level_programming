#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to first node
 *
 * Return: address of looping node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tort, *yass;
if (!head)
return (NULL);
tort = yass = head;
while (yass->next && yass->next->next)
{
yass = yass->next->next;
tort = tort->next;
if (yass == tort)
{
tort = head;
while (tort != yass)
{
tort = tort->next;
yass = yass->next;
}
return (yass);
}
}
return (NULL);
}
