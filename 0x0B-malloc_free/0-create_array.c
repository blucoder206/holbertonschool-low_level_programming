#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: variable type int
* @c: variable type char
*
* Return: 0
**/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	a = (char *)malloc(size * sizeof(c));
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i <= size; i++)
	{
		a[i] = c;
	}
	return (a);
}
