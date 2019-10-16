#include <stdio.h>
/**
 *main - print numbers from 00 to 99 with , and space
 *Return: 0
 */
int main(void)
{
	int number;
	int number2;

	number = 48;
	number2 = 48;
	while (number < 58)
	{
		while (number2 < 58)
		{
			putchar(number);
			putchar(number2);
			if (number != 57 ||  number2 != 57)
			{
				putchar(44);
				putchar(32);
			}
			number2++;
	}
		number2 = 48;
		number++;
	}
	putchar('\n');
	return (0);
}
