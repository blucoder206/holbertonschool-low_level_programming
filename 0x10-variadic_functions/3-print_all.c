#include "variadic_functions.h"
/**
 * pchar - prints char
 * @arg: char to print
 */
void pchar(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * pinteger - prints integer
 * @arg: integer to print
 */
void pinteger(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * pfloat - prints float
 * @arg: float to print
 */
void pfloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * pstring - prints an string
 * @arg: string to string
 */
void pstring(va_list arg)
{
	char *nostring = va_arg(arg, char *);

	if (nostring == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", nostring);
}
/**
 * print_all - prints all
 * @format: format of data
 */
void print_all(const char * const format, ...)
{
	va_list arg;

	int i = 0;
	int j;
	char *separator = "";

	td elem[] = {
			{'c', pchar},
			{'i', pinteger},
			{'f', pfloat},
			{'s', pstring}
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;

		while (elem[j].c)
		{
			if (format[i] == (elem[j].c))
			{
				printf("%s", separator);
				elem[j].f(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
