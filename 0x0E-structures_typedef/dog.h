#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that create a dog info
 *
 * @name: the name of the dog
 * @age: the age of the  dog
 * @owner: the owner of the dog
 *
 * Description: first struct with alx
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
