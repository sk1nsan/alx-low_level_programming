/**
 * set_bit - sets bit an index
 *
 * @n: int
 * @index: int
 * Return: 1 if it works
 *	-1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
