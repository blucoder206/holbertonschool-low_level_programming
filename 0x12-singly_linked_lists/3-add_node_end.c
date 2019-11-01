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
	list_t *add_node, *tmp;

	add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
	{
		free(add_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = add_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = add_node;
	}
	if (str == NULL)
	{
		add_node->str = 0;
		add_node->len = 0;
	}
	else
	{
		add_node->str = strdup(str);
		if (add_node->str == 0)
		{
			free(add_node);
			return (NULL);
		}
		add_node->len = _strlen(str);
	}
	add_node->next = NULL;
	return (NULL);
}
