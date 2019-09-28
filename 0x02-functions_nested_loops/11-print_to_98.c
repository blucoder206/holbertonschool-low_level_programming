#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - This funcion will print the numbers until reach to 98
*@n: The variable passed
*Return: 0
**/
void print_to_98(int n)
{
	int x = 98;

/*	if ((n >= 0) && (n <= x)) */
	if (n <= x)
	{
		while (n <= x)
		{
			printf("%d", n);
			if (n != x)
			{
				printf(", ");
			}

		n++;
		}
	printf("\n");
	}

	else if (n > x)
	{
		while (n >= x)
		{
		printf("%d", n);
		if (n != x)
		{
			printf(", ");
		}
		n--;
		}
	printf("\n");
	}
}
