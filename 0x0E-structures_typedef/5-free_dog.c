#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees dog
 *
 * Return: Success
 */

void free_dog(dog_t *d)
{
	if (dog != NULL){
		free(d->name);
		free(d->owner);
		
		free(d);
	}	
}
