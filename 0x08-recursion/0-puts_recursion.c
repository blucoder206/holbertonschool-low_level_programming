#include "holberton.h"
/**
* _puts_recursion - This funcion will print a char recursively
* @str: Passed variable
* Return: void
**/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
