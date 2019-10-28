#include "variadic_functions.h"
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

	for (i = 0; i < n; i++)
	{
		char *pstring = va_arg(string, char *);

		if (pstring == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pstring);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
