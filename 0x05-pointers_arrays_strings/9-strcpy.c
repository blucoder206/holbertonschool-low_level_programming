#include "holberton.h"
/**
* _strcpy - This funcion will copy an pointer to other
* @dest: destination
* @src: source
* Return: will return dest
**/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 00; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 00;
	return (dest);
}
