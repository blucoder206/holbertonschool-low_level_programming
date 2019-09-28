#include "holberton.h"
#include <stdio.h>
/**
*
*
*
**/
void print_to_98(int n)
{
	int x = 98;

/*	if ((n >= 0) && (n <= x)) */
	if (n <= x)
	{
		while (n <= x)
		{
			printf("%d",n);
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
		printf("%d",n);
		if (n != x)
		{
			printf(", ");
		}
		n--;
		}
	printf("\n");
	}
}
