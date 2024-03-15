#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
  * free_dog - a function that frees dogs.
  * @d: pointer to the dog struct
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
