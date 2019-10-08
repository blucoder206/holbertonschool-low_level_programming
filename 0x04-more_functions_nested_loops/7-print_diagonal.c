#include "holberton.h"
/**
*
*
*
**/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != i)
				{
					_putchar(32);
				}
				else
				{
					_putchar(92);
				}
			}
		_putchar('\n');
		}
	}
}
