#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numbers = 48;
char letters = 97;
while (numbers <= 57)
{
putchar(numbers);
numbers++;
}
while (letters <= 102)
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
