#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
