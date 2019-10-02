#include "holberton.h"
/**
 * _atoi - This funcion will convert an string to int
 * @s: The string to convert
 * Return: The program will return
 **/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int re = 0;
	int result;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			re = re * 10 + (s[i] - '0');

			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
			{
				break;
			}

		}
		if (s[i] == '-')
		{
		sign *= -1;
		}
	i++;

	}
	result = re * sign;
	return (result);
}
