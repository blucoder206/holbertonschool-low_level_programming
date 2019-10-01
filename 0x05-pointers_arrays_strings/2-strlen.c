#include "holberton.h"
/**
 * _strlen - check the length of a string
 * @s: pointer type char
 * Return: The program will return the number of characters of *s (the length)
 **/
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
	counter++;
	}
return (counter);
}

