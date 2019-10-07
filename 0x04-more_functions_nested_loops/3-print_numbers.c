#include "holberton.h"
/**
* print_numbers - This funcion will print the numbers from 0 to 9.
* Return: Void
**/
void print_numbers(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
