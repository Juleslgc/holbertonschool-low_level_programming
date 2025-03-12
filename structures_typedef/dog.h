#ifndef MY_DOG_H
#define MY_DOG_H
#include <stdio.h>
/**
 * struct dog - Dog
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
