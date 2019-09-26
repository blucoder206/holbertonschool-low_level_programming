#include "holberton.h"
/**
*print_last_digit - will print the last number of number
*@number: value of number
*Return: will return lastdigit
**/
int print_last_digit(int number)
	{
	int lastdigit;

	lastdigit = number % 10;
	if (lastdigit < 0)
		{
		lastdigit = lastdigit * -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
		}
	else
		{
		_putchar(lastdigit + '0');
		return (lastdigit);
		}

}
