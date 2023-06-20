#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies a string
 * @dest: destinatiom
 * @src: source
 * Return: copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	for (j = 0; src[j]; j++)
		dest[j] = src[j];

	dest[j] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->name = _strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);

	return (p);
}
