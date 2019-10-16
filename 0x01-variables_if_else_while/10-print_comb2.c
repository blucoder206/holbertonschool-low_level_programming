#include <stdio.h>
/**
* main - print numbers from 00 to 99 with comma and spaces
* Return: 0
**/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar (10);
	return (0);
}
