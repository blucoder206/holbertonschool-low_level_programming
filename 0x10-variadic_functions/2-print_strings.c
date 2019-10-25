#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings
* @separator: separator of every string
* @n: quantity of elements
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(string, char *));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
