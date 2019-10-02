#include "holberton.h"
/**
 * puts_half - This funcion will print half of a string
 * @str: passing pointer
 **/
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n, loop;
	int half;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	half = length_of_the_string / 2;
	if (length_of_the_string % 2 == 0)
	{
		for (loop = half; loop <= length_of_the_string; loop++)
		{
		_putchar(str[loop]);
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
