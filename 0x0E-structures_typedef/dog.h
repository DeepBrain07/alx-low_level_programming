#ifndef DOG_H
#define DOG_H
/**
*struct dog - struct that stores information about a dog
*@name: name of the dog
*@age: the Dog's age
*@owner: owner of the dog
*
*Description: stores information about a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
