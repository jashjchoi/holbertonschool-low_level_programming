#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct of dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: define struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - new typedef for struct of dog
*/
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
