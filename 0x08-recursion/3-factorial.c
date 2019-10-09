#include "holberton.h"
/**
* factorial - check a factorial of a passed number
* @n: passed number
* Return: Factor of n
**/
int factorial(int n)
{
	if (n > 0)
	{
		return(factorial(n-1) * n);
	}
	else
	{
		return (1);
	}
}
