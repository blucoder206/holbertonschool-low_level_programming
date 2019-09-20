#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);

if (number < 57)
{
putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}
/** 1245@holbertonschool.com **/
