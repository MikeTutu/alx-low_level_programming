#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines type
 * @name: dog name
 * @age: age
 * @owner: dogs owner
 * Description: d
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
