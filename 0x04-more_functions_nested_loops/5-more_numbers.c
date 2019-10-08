#include "holberton.h"
/**
* more_numbers - Print numbers from 0 to 14
* Return: void
**/
void more_numbers(void)
{
	int number;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (number = 0; number <= 14; number++)
		{
			if (number / 10 != 0)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
	_putchar('\n');
	}
}
