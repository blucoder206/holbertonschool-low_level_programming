#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char var;
char varUPPER;
for (var = 'a'; var <= 'z'; var++)
putchar(var);
for (varUPPER = 'A'; varUPPER <= 'Z'; varUPPER++)
putchar(varUPPER);
putchar('\n');

return (0);
}
