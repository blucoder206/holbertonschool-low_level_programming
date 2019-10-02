#include "holberton.h"
/**
* _puts - This funcion will print a string
* @str: char type pointer
**/
void _puts(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}

	_putchar('\n');
}
