#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function that creates a new dog.
 * @name: It's a character pointer to the name.
 * @age: It's a float to the age.
 * @owner: It's a character pointer to the owner.
 * Return: return new_d in end.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, j;
	char *cpn, *cpo;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (name != NULL)
	{
		for (i = 0 ; name[i] != '\0' ; i++)
		;
		cpn = malloc((i + 1) * (sizeof(char)));
		if (cpn == NULL)
			free(new_d);
			return (NULL);
		for (j = 0 ; j <= i ; j++)
			cpn[j] = name[j];
		new_d->name = cpn;
	}
	if (owner != NULL)
	{
		for (i = 0 ; owner[i] != '\0' ; i++)
		;
		cpo = malloc((i + 1) * sizeof(char));
		if (cpo == NULL)
			free(cpn);
			free(new_d);
			return (NULL);
		for (j = 0 ; j <= i ; j++)
			cpo[j] = owner[j];
		new_d->owner = cpo;
	}
	if (age >= 0)
		new_d->age = age;
	return (new_d);
}
