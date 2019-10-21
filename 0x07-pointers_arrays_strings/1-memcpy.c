#include "holberton.h"
/**
* *_memcpy - copies n bytes from src to dest
* @src: source of bytes
* @dest: destination of bytes
* @n: delimiter
*
* Return: dest with copied bytes
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src != 00 && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
