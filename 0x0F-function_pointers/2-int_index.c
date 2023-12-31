#include <stddef.h>
/**
 * int_index - searches for int
 *
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of int if it exist
 *	-1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
