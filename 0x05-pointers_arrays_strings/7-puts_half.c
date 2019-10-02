#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 **/
void puts_half(char *str)
{
	int i = 0;
	int c;
	int h;

	while(str[i] != '\0')
	{
		i++;
	}
	h = i/2;
	c = h;

	if (i % 2 == 0)
	{
		while (str[c] >= h)
		{
                _putchar(str[c]);
                c++;
        	}
	}
	else
	{
		c = i-1 / 2;
		_putchar(str[c]);
		c++;
	}

}
