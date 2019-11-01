#include <stdio.h>
/**
*
*
*
**/
int main(void)
{
	int i, j, k, l;

	for(i = 0; i < 99; i++)
	{
		for (j = 0; j < 99; j++)
		{
			putchar((i/10) + '0');
			putchar((i%10) + '0');
		
		}
	}
	putchar (10);
	return (0);
}
