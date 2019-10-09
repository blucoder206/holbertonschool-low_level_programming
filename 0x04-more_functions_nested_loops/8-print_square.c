#include "holberton.h"
/**
* print_square - This funcion will print a square 'size' times
* @size: variable type int
* Return: void
**/
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar(10);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
