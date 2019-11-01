#include "lists.h"

/**
 * _strlen - get length of an string
 * @s: passed string
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
 * add_node_end - add a node at the end
 * @head: head of node
 * @str: string
 *
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new, *tmp;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
	{
		free(add_new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = add_new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = add_new;
	}
	if (str == NULL)
	{
		add_new->str = 0;
		add_new->len = 0;
	}
	else
	{
		add_new->str = strdup(str);
		if (add_new->str == 0)
		{
			free(add_new);
			return (NULL);
		}
		add_new->len = _strlen(str);
	}
	add_new->next = NULL;
	return (add_new);
}
