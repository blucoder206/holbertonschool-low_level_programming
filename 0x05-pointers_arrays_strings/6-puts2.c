#include "holberton.h"
/**
*
*
*
**/

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
		if (i == 2 || i == 4 || i == 6 || i == 8)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
