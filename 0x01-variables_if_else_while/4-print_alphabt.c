#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char var;
for (var = 97; var <= 122; var++)
{
if (!(var == 101 || var == 113))
{
putchar(var);
}
}
putchar('\n');
return (0);
}
/**1245@holbertonschool.com**/
