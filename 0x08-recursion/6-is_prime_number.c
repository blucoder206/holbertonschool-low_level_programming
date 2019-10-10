#include "holberton.h"
/**
* funcion - Check if a number is prime
* @a: Passed number
* @b: 2
* Return: 1 if the input integer is a prime number, otherwise return 0
**/
int funcion(int b, int a)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (funcion(b + 1, a));
	}
}
/**
* is_prime_number - Call the funcion to check if a number is prime
* @n: Passed number
* Return: 0 if input integer is less than 1
**/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (funcion(2, n));
	}
}
