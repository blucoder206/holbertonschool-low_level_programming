#include "holberton.h"
/**
* puts2 - check if *str is a even number.
* @str: - the string passed
**/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 00)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	i++;
	}
	_putchar(10);
}
