#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: consecutive search
*
* Return: ocurrencies found
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; accept[j] != 00; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (n);
}
