#include "holberton.h"
/**
* puts2 - check if *str is a even number.
* @str: - the string passed
**/
void puts2(char *str)
{
	int i;

	for (i = 0; (i < str[i]) != 00; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
