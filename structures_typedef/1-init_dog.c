#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
  * init_dog - initialize struct dog.
  * @d: struct name
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
