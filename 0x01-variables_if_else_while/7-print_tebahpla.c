#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char mander = 122;
while (mander >= 97)
{
putchar(mander);
mander--;
}
putchar('\n');
return (0);
}
