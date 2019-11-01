#include "lists.h"
/**
* free_list - frees memory after usage
* @head: head of nodes
*
* Return: nothing
**/
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);

}
