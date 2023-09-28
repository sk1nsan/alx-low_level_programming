/**
 * flip_bits - return number of bits you would need to flip to get from n to m
 *
 * @n: first number
 * @m: second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;
	int x = n ^ m;

	for (i = 0; x; i++)
	{
		if ((x & (1 << i)) != 0)
			result++;
		x = x & ~(1 << i);
	}
	return (result);
}
