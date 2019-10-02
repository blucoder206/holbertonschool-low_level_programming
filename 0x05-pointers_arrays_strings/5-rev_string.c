#include "holberton.h"
/**
 * rev_string - This funcion will reverse an string
 * @s: string
  **/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i] != '\0')
	{
	i++;
	}
	i--;
	while (j <= i)
	{
	tmp = s[j];
	s[j] = s[i];
	s[i] = tmp;
	j++;
	i--;
	}
}
