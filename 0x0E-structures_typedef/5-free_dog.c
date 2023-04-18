#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory allocated for the struct dog
 *
 * @d: struct pointer to dog
*/
void free_dog(dog_t *d)
{
	if (d)
		free(d->name);
		free(d->owner);
		free(d);
}
