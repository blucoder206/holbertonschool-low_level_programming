#include "holberton.h"
/**
 * print_rev - This funcion will reverse an string and print it
 * @s: string type pointer
 *
 **/
void print_rev(char *s)
{
	int counter;

	while (s[counter] != '\0')
	{
	counter++;
	}
	while (counter > 0)
	{
		--counter;
		_putchar(s[counter]);
	}
	_putchar('\n');
}
