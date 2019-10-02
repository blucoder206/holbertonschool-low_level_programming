#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - This funcion will copy an pointer to other
* @dest: destination
* @src: source
* Return - will return dest
**/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0';)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
