#include "holberton.h"
/**
* print_alphabet - print the string 'abcdefghijklmnopqrstuvwxyz'
*
* Return: 0 on success.
*/
void print_alphabet(void)
{
/** Way 1 **/

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
/** Way 2**/
/**
*	char c[] = "abcdefghijklmnopqrstuvwxyz";
*	int var;
*
*	for (var = 0; var <= 25; var++)
*	{
*	_putchar(c[var]);
*	}
*	_putchar('\n');
**/
}
