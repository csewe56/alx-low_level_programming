#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner information
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
 * init_dog - Initializes a dog structure
 * @d: Pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Function initializes a dog structure with the provided
 * name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the content of a dog structure
 * @d: Pointer to a struct dog
 *
 * Description: Function prints the content of a dog structure, including
 * name, age, and owner.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Pointer to a new dog structure
 *
 * Description: Function creates a new dog structure and initializes it
 * with the provided name, age, and owner.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to a struct dog
 *
 * Description: Function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */


