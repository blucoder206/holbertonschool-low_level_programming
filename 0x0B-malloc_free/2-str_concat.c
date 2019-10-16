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

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* str_concat - This funcion will concatenate two strings
* @s1: String 1
* @s2: String 2
* Return: Result of concatenate s1 & s2
**/
char *str_concat(char *s1, char *s2)
{
	char *a;
	int var1, var2, m, i, o;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	var1 = _strlen(s1);
	var2 = _strlen(s2);
	a = malloc(((var1) + (var2) + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < var1; m++)
	{
		a[m] = s1[m];
	}
	for (i = var1, o = 0; o <= var2; i++, o++)
	{
		a[i] = s2[o];
	}
	return (a);
}
