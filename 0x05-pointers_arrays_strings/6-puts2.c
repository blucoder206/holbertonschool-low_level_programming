#include "holberton.h"
/**
* puts2 - This funcion only will print the str content if is 0, 2, 4 ,6 or 8
* @str: char-type pointer
**/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
