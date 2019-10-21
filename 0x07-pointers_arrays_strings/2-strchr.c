#include "holberton.h"
/**
* *_strchr - Search an character in a string
* @s: string
* @c: character to find
*
* Return: s + i
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i + 1] == c)
		{
			return (s + i + 1);
		}
	}
	return (0);
}
