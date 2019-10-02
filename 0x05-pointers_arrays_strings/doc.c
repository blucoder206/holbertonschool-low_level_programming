#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: takes in array type char
 * saves the output to the same string
 * used SIZE - HALF to get round up value of the half
 */
void rev_string(char *s)
{
	int i, j;
	char a, b;
	int size, half;

	for (i = 0; s[i] != '\0'; i++)
	{}
	size = i - 1;
	half = size / 2;
	for (j = size; j >= (size - half); j--)
	{ /* swaping last with first until it reaches middle */
		a = s[j]; /* 8 element to a*/
		b = s[size - j]; /* 0 element to b*/
		s[size - j] = a; /* 8 element -> 0 element*/
		s[j] = b; /* 0 element -> 8 element */
	}
}
