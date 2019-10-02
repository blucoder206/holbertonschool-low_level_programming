#include "holberton.h"
/**
* _strcpy - This funcion will copy an pointer to other
* @dest: destination
* @src: source
* Return: will return dest
**/
char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (pointer);
}
