#include "holberton.h"
/**
 * swap_int - this funcion will swap the value bettwen *a and *b
 * @a: integer pointer
 * @b: integer pointer
 **/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
