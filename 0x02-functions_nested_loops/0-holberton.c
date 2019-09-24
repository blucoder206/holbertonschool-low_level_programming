#include "holberton.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char c[] = "Holberton";
int var;

for (var = 0; var <= 9; var++)
{
_putchar(c[var]);
}
_putchar('\n');
return (0);
}


