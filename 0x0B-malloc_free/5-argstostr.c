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
 * argstostr - this funcion will concatenates all the arguments
 * @ac: number of arguments
 * @av: the arguments
 * Return: contatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int c;
	int var;
	int j;
	int k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	var = 0;

	for (c = 0; c < ac; c++)
	{
		var = var +  _strlen(av[c]);
	}

	a = malloc((var + ac) * sizeof(char));
	if (a == NULL)
	{
		free(a);

		return (NULL);
	}

	var = 0;

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			a[var] = av[j][k];
			var++;
		}

		a[var] = '\n';
		var++;
	}
	return (a);
	
}
