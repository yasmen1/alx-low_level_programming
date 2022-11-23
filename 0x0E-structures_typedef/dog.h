#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/*
 * struct dog - create a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

