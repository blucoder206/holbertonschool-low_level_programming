#include <stdio.h>
#include "dog.h"
/**
* print_dog - print a struct dog
* @d: pointer to struct
*
* Return: nothing
**/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age == 0 ? 0 : d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
