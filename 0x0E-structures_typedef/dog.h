#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - a dog struct attributes
 * @name: the name of the dog
 * @age: The age of the dog
 * @owner: the owner of the dog
 *
 * Return: the dog attributes
 */
struct dog
{
	char *name;
	char *age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
