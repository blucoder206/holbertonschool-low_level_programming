#include "holberton.h"
/**
* funcion - Check if a number is natural square root
* @a: Passed number
* @b: 1
* Return: -1 if b*b > a, return b if b*b=a, check again
**/
int funcion(int b, int a)
{
	if ((b * b) > a)
	{
		return (-1);
	}
	if ((b * b) == a)
	{
		return (b);
	}
	else
	{
		return (funcion(b + 1, a));
	}
}
/**
* _sqrt_recursion - This is the recursive funcion
* @n: Passed number
* Return: sds
**/
int _sqrt_recursion(int n)
{
	if (n >= 1)
	{
		return (funcion(1, n));
	}
	else
	{
		return (-1);
	}
}
