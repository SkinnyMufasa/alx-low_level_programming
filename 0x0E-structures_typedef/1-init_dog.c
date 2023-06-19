#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Struct that needs ti initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Initialized variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = malloc(strlen(name) + 1);
	my_dog.owner = malloc(strlen(owner) + 1);
	strcpy(my_dog.name, name);
	strcpy(my_dog.owner, owner);
	my_dog.age = age;

	(*d) = my_dog;
}
