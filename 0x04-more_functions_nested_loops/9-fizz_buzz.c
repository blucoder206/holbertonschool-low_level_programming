#include <stdio.h>
/**
* main - This funcion will print numbers from 0  to 100, but instead
*	 multiplies of 3 will print 'Fizz' instead multiplies of 5
*	 will print 'Buzz' and if the number it's multiplies of 4 and
*	 5 will print FizzBuzz
* Return: 0
**/
int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (((numbers % 3) == 0) && (numbers % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((numbers % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((numbers % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", numbers);
		}
		if (numbers == 100)
		{
			putchar(10);
		}
		else
		{
			putchar(32);
		}
	}
	return (0);
}
