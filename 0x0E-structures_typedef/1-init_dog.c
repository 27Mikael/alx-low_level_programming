#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initializes type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;

		if (owner != NULL)
		{
			d->owner = strdup(owner);

			if (d->owner == NULL)
			{
				free(d->name);
				free(d);
				return;

			}
		}

		else
		{
			d->owner = NULL;
		}
	}
}
