#include "holberton.h"
#include <ctype.h>
/**
* _islower - Funcion check if c is lowercase.
*@c: char to check
*
*Return: 1 (True) else 0 (False)
*
**/
int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	return (0);
}

