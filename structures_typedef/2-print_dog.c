#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
  * print_dog - initialize struct dog.
  * @d: struct name
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name:(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
