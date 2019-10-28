#include "variadic_functions.h"
/**
* print_numbers - prints numbers
* @separator: separator of every number
* @n: quantity of elements
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
}
