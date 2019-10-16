#include "holberton.h"
/**
* _puts - This funcion will print a string
* @str: char type pointer
**/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 00; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
