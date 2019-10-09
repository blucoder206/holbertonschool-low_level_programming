#include "holberton.h"
/**
* print_triangle - This funcion will print a triangle
* @size: Size of triangle
* Return: void
**/
void print_triangle(int size)
{
	int i;
	int j;

	if (size < 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar(10);
		}
	}
}
