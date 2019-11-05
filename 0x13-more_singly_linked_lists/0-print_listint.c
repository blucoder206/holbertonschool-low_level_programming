#include "lists.h"
/**
 * print_listint - print elements of list
 * @h: elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int back;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		back = 1 + print_listint(h->next);
		return (back);
	}
}
