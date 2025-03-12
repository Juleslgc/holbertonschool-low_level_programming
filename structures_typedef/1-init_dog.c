#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Function that initialize a variable of struct dog.
 * @d: It's a pointer to the struct dog.
 * @name: It's character pointer to the name.
 * @age: It's a float to the age.
 * @owner: It's a character pointer to the owner.
 * Return: return void in end.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
