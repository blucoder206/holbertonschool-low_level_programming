#include "lists.h"

/**
* _strlen - get length of an string
* @str: passed string
*
* Return: length of an strings
**/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 00; i++)
	{
	}
	return (i);
}
/**
* add_node - add a new node
* @head: head of nodes
* @str: string
*
* Return: node
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
		return (NULL);
	if (str == NULL)
	{
		char *p = "(nil)";

		add_new->str = strdup(p);
		add_new->len = 0;
		add_new->next = *head;
		*head = add_new;
		return (add_new);
	}
	else
	{
		add_new->str = strdup(str);
		add_new->len = _strlen(str);
		add_new->next = *head;
		*head = add_new;
		return (add_new);
	}
	return (NULL);

}
