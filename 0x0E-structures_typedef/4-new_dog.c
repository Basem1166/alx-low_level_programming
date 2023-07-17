#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *name2, owner2;

	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	/* checking name pointer*/
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	strcpy(name, strlen(name));
	strcpy(owner, strlen(owner));
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
