#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: get a pointer from main.
 * @name: get a string as name.
 * @age: get a number as age.
 * @owner: get a string as owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*The structure dog have a name, age, owner elements*/
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
