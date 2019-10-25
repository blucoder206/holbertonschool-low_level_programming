#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator:
* @n:
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i != n-1)
		{
			printf("%c ", *separator);
		}
     }
	printf("\n");

}
