#include <stdlib.h>
/**
 * array_iterator - pass every element of array to function
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size <= 0)
		return;
	if (action == NULL)
		return;
	if (array == NULL)
		return;

	for (i = 0; (size_t)i < size; i++)
		action(array[i]);

}
