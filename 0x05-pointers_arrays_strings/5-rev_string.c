#include "holberton.h"
/**
 * rev_string - This funcion will reverse an string
 * @s: string
 **/
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	for (i = 0; s[i] != 00; i++)
	{
	}

	i = i - 1;

	for (j = 0; j <= i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
