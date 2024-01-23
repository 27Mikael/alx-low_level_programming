#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 *
 * Return: NULL upon failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/*check if input parameters are NULL*/
	if (name == NULL || owner == NULL){
		return NULL;
	}
	/*Allocate memory for the new dog*/
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	/*Check if memory was allocated successfully*/
	if (new_dog == NULL){
		return NULL;
	}
	/*Allocate memory off the name and the owner*/
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	/*Check if string copying was successful*/
	if (new_dog ->name == NULL || new_dog->ownder == NULL){
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return NULL;
	}
	/*set the age*/
	new_dog->age = age;
	
	return new_dog;
}
