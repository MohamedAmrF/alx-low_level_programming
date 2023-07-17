#ifndef DOGH
#define DOGH

/**
* struct dog - dog struct
* @name: dog name
* @age: dog age
* @owner: owner name
*
* Description: long description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
