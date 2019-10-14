#include <stdio.h>
/**
* main - This program will prints all arguments it receives.
* @argc: Argument count
* @argv: Argument vector
* Return: void
**/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
}
