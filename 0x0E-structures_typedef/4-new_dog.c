#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
* new_dog - creates new dog
* @name: pointer to dog's name
* @age: pointer to dog's age
* @owner: pointer to dog's owner
* Return: string of new dog, NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length1 = 0, length2 = 0;
	dog_t *new_doggo;

	new_doggo = malloc(sizeof(dog_t));
	if (new_doggo == NULL)
	{
		return (NULL);	
	}
	while (name[length1] != '\0')
	{
		length1++;
	}
	new_doggo->name = malloc(sizeof(char) * (length1 + 1));
	if (new_doggo->name == NULL)
	{
		free(new_doggo);
		return (NULL);
	}
	new_doggo->age = age;
	while (owner[length2] != '\0')
	{
		length2++;
	}
	new_doggo->owner = malloc(sizeof(char) * (length2 + 1));
	if (new_doggo->owner == NULL)
	{
		free(new_doggo->name);
		free(new_doggo);
		return (NULL);
	}
	for (i = 0; i <= length1; i++)
	{
		new_doggo->name[i] = name[i];
	}
	for (i = 0; i <= length2; i++)
	{
		new_doggo->owner[i] = owner[i];
	}
	return (new_doggo);
}
