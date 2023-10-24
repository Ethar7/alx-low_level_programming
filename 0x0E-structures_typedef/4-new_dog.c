#include "dog.h"
#include <stdlib.h>
/**
 * string_copy - copy a string
 *
 * @s: an array
 * @copy_s: an array
 *
 * Return: array
*/
char *string_copy(char *s, char *copy_s)
{
	int i = 0;

	while (s[i])
	{
		copy_s[i] = s[i];
		i++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
/**
 * string_length - string length
 *
 * @s: pointer
 *
 * Return: length
*/
int string_length(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
/**
 * new_dog - function create new dog
 *
 * @owner: string
 * @age: int
 * @name: string
 *
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!owner || !name || age < 0)
		return (NULL);

	new = (dog_t *) malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = malloc(sizeof(char) * (string_length(name) + 1));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (string_length(owner) + 1));

	if ((*new).owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = string_copy(new->name, name);
	new->age = age;
	new->owner = string_copy(new->owner, owner);

	return (new);
}

