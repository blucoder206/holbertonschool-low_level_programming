#include "holberton.h"
/**
* print_alphabet - print the string 'abcdefghijklmnopqrstuvwxyz'
*
* Return: 0 on success.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
