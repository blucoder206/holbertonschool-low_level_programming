#include "holberton.h"
/**
 * _strbrk - search 's'
 * @s: string
 * @accept: search
 * Return: char found
 */
char *_strpbrk(char *s, char *accept)
{
	char *n = accept;

	while (*s)
	{
		for (accept = n; *accept; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
