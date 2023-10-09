#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 */
void print_dog(dog_t *d);

#endif /* DOG_H */





