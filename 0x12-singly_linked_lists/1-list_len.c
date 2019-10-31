#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: list of elements
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
	h = h->next;
	}
	return (i);
}
