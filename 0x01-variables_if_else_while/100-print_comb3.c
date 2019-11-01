#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: nothing
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && j > i)
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
	}
	return (0);
}
