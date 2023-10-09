#include <stdlib.h>
#include "dog.h"

/**
 *  _copy - copies passed in argument
 *  @src: data to be copied
 *  Return: pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
	{
		continue;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *oddie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	oddie = malloc(sizeof(dog_t));
	if (oddie == NULL)
		return (NULL);

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(oddie);
		return (NULL);
	}
	(*oddie).name = new_name;

	(*oddie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*oddie).name);
		free(oddie);
		return (NULL);
	}

	(*oddie).owner = new_owner;

	return (oddie);
}


