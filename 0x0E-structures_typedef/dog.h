#ifndef DOG_H
#define DOG_H
/**
*dog_t - typedef for 'struct dog'
*/

/**
*struct dog - struct that stores information about a dog
*@name: name of the dog
*@age: the Dog's age
*@owner: owner of the dog
*
*Description: stores information about a dog
*/
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
