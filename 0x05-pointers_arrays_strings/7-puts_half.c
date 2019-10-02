#include "holberton.h"
/**
 * puts_half - This funcion will print half of a string
 * @str: passing pointer
 **/
void puts_half(char *str)
{
	int length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
		str++;
	}

	if ((length_of_the_string % 2) == 0)
	{
		str -= (length_of_the_string / 2);
	}
	else
	{
		str -= ((length_of_the_string - 1) / 2);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
