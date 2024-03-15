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

    /* Initialize variables */
    name_len = owner_len = 0;

    /* Calculate lengths of name and owner */
    while (name[name_len])
        name_len++;
    while (owner[owner_len])
        owner_len++;

    /* Allocate memory for the dog structure */
    mydog = (dog_t *)malloc(sizeof(dog_t));
    if (mydog == NULL)
        return (NULL);

    /* Allocate and copy name */
    mydog->name = (char *)malloc((name_len + 1) * sizeof(char));
    if (mydog->name == NULL)
    {
        free(mydog); /* Free allocated memory for the structure */
        return (NULL);
    }
		for (i = 0; i < name_len; i++) 
			{
				mydog->name[i] = name[i];
			}

	mydog->name[i] = '\0'; /* Null-terminate the string */

    /* Set age */
	mydog->age = age;

    /* Allocate and copy owner */
    mydog->owner = (char *)malloc((owner_len + 1) * sizeof(char));
    if (mydog->owner == NULL)
    {
        free(mydog->name); /* Free allocated memory for name */
        free(mydog);       /* Free allocated memory for the structure */
        return (NULL);
    }
    for (i = 0; i < owner_len; i++) 
	{
        mydog->owner[i] = owner[i];
    }

    mydog->owner[i] = '\0';

    return (mydog);
}
