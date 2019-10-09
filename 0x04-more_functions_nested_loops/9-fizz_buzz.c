#include <stdio.h>
/**
*
*
*
**/
void main(void)
{
	int numbers;
	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (((numbers % 3) == 0) && (numbers % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		if ((numbers % 3) == 0)
		{
			printf("Fizz ");
		}
		if ((numbers % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numbers);
		}
	}
}
