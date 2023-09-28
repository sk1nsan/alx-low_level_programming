/**
 * flip_bits - return number of bits you would need to flip to get from n to m
 *
 * @n: first number
 * @m: second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int  result = 0;
	int x = n ^ m;

	while (x)
	{
		x = x & (x -1);
		result++;
	}
	return (result);
}
