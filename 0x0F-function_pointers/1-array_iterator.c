#include <stddef.h>
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

	for (i = 0; (size_t)i < size; i++)
		action(array[i]);

}
