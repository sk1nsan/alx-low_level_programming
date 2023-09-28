/**
 * get_bit - gets bit an index
 *
 * @n: int
 * @index: int
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
