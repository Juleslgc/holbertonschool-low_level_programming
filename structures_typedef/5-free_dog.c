#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function that frees dogs.
 * @d: It's a pointer to the struct dog.
 * Return: return void in end.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
