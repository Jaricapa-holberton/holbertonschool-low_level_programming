#include "dog.h"
/**
 * free_dog - Free structure.
 * @d: get a pointer to a dog_t structure.
 */
void free_dog(dog_t *d)
{
	/*free the dog structure*/
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
