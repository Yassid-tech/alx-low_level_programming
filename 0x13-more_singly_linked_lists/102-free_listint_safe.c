#include "lists.h"

/**
 * free_listint_safe - prints a list
 * @h: address of pointer to first node
 *
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
size_t d = 0;
listint_t *head, *tempo;
long diff;
if (!h)
return (0);
head = *h;
*h = NULL;
while (head)
{
d++;
diff = head->next - head;
tempo = head;
free(temp);
if (diff >= 0)
break;
head = head->next;
}
return (d);
}
