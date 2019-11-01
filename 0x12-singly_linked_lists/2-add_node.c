#include "lists.h"
#include <string.h>
/**
* _strlen - get length of an passed string
* @s: string
*
* Return: length of an string
**/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{}
	return (i);
}
/**
* add_node - add node at the beginning of a list_t list
* @head:
* @str:
*
* Return: 
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	const char *st = str;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	if ((str == NULL) || (head == NULL))
	{
		return (NULL);
	}
	add_node->str = strdup(st);
	add_node->len = _strlen(st);
	add_node->next = *head;

	return (add_node);
}
