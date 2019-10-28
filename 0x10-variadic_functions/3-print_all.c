#include "variadic_functions.h"
/**
*
*
*
**/
void pchar(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
void pinteger(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
void pfloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
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

	while (format && format [i])
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
