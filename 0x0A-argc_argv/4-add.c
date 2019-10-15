#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - This program adds positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if success, 1 if error
**/
int main(int argc, char *argv[])
{

	int i;
	int j;
	int result;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 00; j++)
		{
			if (!isdigit(argv[i][j]) || !isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
