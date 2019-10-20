#include "holberton.h"
/**
* reverse_array - this funcion will reverse an array
* @a: array elements
* @n: number of elements
**/
void reverse_array(int *a, int n)
{
	int i, buf;

	for (i = 0; i < n - 1; i++, n--)
	{
		buf = a[i];
		a[i] = a[n - 1];
		a[n] = buf;
	}
}
