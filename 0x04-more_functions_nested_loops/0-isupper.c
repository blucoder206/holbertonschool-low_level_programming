#include "holberton.h"
/**
* _isupper - This funcion will check if a letter is upper or not
* @c: The letter to check
* Return: 1 if the letter is uppercase, 0 otherwise
**/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

