#include "holberton.h"
/**
 * print_rev - This funcion will reverse an string and print it
 * @s: string type pointer
 **/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar(10);
}
