#include "holberton.h"
/**
*_isalpha - check if a char is a letter
*@c: char to check
*Return: 1 (True) or 0 otherwise
*
**/

int _isalpha(int c)
	{
	if ((c  >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	}
