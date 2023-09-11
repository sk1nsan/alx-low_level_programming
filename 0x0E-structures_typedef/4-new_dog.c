#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	char *n, *o;
	int i;

	if (d == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	n = malloc((i + 1) * sizeof(char));
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		n[i] = name[i];
	n[i] = '\0';

	for (i = 0; owner[i]; i++)
		;
	o = malloc((i + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		o[i] = owner[i];
	o[i] = '\0';

	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
