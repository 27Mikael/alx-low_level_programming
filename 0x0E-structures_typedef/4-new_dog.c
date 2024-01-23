#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Check if input parameters are NULL */
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	/* Declare variables at the beginning */
	dog_t *new_dog;

	/* Allocate memory */
	new_dog = (dog_t *)malloc(sizeof(dog_t));

	/* Check if memory was allocated successfully */
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the name and owner */
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	/* Check if string copying was successful */
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Set the age */
	new_dog->age = age;

	return (new_dog);
}

