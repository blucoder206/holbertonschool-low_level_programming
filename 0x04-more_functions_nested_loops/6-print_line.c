#include "holberton.h"
/**
* print_line - This funcion will print the character _ n times
* @n: Times that the character should be printed
* Return: void
**/
void print_line(int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
