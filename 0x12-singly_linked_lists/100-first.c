#include <stdio.h>
void printitbeforemain(void) __attribute__ ((constructor));
/**
* printitbeforemain - execute the following code before main
**/
void printitbeforemain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
