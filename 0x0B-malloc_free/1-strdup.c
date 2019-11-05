#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - check the length of a string
* @str: pointer type char
* Return: The program will return the length of a string
**/
int  _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 00; i++)
	{
	}
	return (i);
}
/**
* _strdup - copy an string
* @str: pointer char type
* Return: String copied
**/
char *_strdup(char *str)
{
	char *a;
	int m;
	int n;

	if (str == NULL)
	{
		return NULL;
	}
	else
	{
		m = _strlen(str);
		a = (char *)malloc(m * sizeof(char) + 1);
		if (a == NULL)
		{
			return (0);
		}
		for (n = 0; str[n] != '\0'; n++)
		{
			a[n] = str[n];
		}
		return (a);
	}
	free(a);
}
