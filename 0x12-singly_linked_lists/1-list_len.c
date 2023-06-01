#include <stdlib.h>
#include "lists.h"
/**
* list_len - return the number of elements
* @h: list_t list pointer
* Return: elements in h
*/
size_t list_len(const list_t *h)
{
size_t y = 0;
while (h)
{
y++;
h = h->next;
}
return (y);
}
