#include <stdio.h>
#include <errno.h>
#include <string.h>

/**
 * main - Prints and that piece of art is useful\" - Dora Korpar, 2015-10-19\n
 *
 * Return: 1 if successful
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	perror(message);
	return (1);
}
