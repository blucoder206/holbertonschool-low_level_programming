#include "holberton.h"
/**
*times_table - print the 9 times table
*Return - void
**/
void times_table(void)
{
	int x, z, y;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		for (z = 1; z < 10; z++)
		{
			y = z * x;
			_putchar(44);
			_putchar(32);
			if (y < 10)
			{
				_putchar(32);
				_putchar(y + 48);
			}
			else
			{
			_putchar(y / 10 + 48);
			_putchar(y % 10 + 48);
			}
		}
	_putchar('\n');
	}
}

