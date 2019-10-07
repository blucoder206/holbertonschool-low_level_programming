#include "holberton.h"
/**
* _isdigit - This funcion will check if a passed char is a number or not
* @c: The passed char variable
* Return: 1 if c is a number, return 0 if not
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
