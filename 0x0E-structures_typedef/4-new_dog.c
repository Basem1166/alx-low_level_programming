#include "dog.h"
#include <stdlib.h>

/**
  *_strdup - creates an array of char
  * @str : string
  * Return: pointer to array
  */

char *_strdup(char *str)
{
        char *ar;
        int i;
        int length;

        if (str == NULL)
                return (NULL);

        for (i = 0; str[i] != '\0'; i++)
                length++;

        ar = (char *)malloc(sizeof(char) * length + 1);
        if (ar)
        {
                for (i = 0; str[i] != '\0'; i++)
                        ar[i] = str[i];
        }

        if (!ar)
                return (NULL);
        ar[length] = '\0';
        return (ar);
}
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
	name2 = _strdup(name);
	owner2 = _strdup(owner);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
