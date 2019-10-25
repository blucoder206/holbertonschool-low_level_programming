#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum all parameters
* @n: quantity of parameters passed
*
* Return: result of sum all parameters
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	return (result);
}
