#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
  * new_dog - a function that creates a new dog.
  * @name: dog name
  * @age: dog age
  * @owner: owner's dog
  * Return: struct dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{

int name_len, owner_len, i;
dog_t *mydog;

name_len = owner_len = 0;

while (name[name_len++])
;
while (owner[owner_len++])
;

mydog = malloc(sizeof(dog_t));

if (mydog == NULL)
{
	return (NULL);
}

mydog->name = malloc(name_len *sizeof(mydog->name));
	if (mydog == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		mydog->name[i] = name[i];

		mydog->age = age;

mydog->owner = malloc(owner_len * sizeof(mydog->owner));
	if (mydog == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		mydog->owner[i] = owner[i];

		return (mydog);
}
