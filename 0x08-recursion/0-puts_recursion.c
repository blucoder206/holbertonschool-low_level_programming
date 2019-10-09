#include "holberton.h"
/**
* _puts_recursion - This funcion will print a char recursively
* @str: Passed variable
* Return: void
**/
void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
