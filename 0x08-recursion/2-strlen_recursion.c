#include "holberton.h"
/**
* _strlen_recursion - This funcion will check and print the length of a string
* @s: Passed char
* Return: void
**/
int _strlen_recursion(char *s)
{
	if (*s != 00)
	{
		s = s + 1;
		return ((_strlen_recursion(s)) + 1);
	}
		return (0);
}
