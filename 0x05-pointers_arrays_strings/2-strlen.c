#include "holberton.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer type char
 * Return: The program will return the number of characters of *s (the length)
 **/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 00)
	{
		i++;
	}
	return (i);
}
