#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct with dog's info
 *
 * @name: first member - dog's name
 * @age: second member - dog's age
 * @owner: third member - dog onwer's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
