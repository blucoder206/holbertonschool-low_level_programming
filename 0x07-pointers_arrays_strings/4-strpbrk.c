#include "holberton.h"
/**
 * _strbrk - search 's'
 * @s: string
 * @accept: search
 * Return: char found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
