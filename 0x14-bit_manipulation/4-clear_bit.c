/**
 * clear_bit - clears bit an index
 *
 * @n: int
 * @index: int
 * Return: 1 if it works
 *	-1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
