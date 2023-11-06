#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - the new dog
 * @name: dogs name
 * @age: dog's age
 * @owner: dog's owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bosco = malloc(sizeof(dog_t));

	if (bosco == NULL)
	{
		return (NULL);
	}
	bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (bosco->name == NULL)
	{
		free(bosco);
		return (NULL);
	}

	bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (bosco->owner == NULL)
	{
		free(bosco->name);
		free(bosco);
		return (NULL);
	}
	bosco->name = _strcpy(bosco->name, name);
	bosco->age = age;
	bosco->owner = _strcpy(bosco->owner, owner);

	return (bosco);
}

/**
 * _strlen - finds string length
 * @str: the string
 * Return: length ot the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string poinertd to by src, including '\0' to buffer
 *		poinetd to by dest.
 * @dest: buffer storing the string copy
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
