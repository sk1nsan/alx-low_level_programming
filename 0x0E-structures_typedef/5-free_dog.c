#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dog
 *
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
