/**
 * power - return x ** y
 *
 * @x: int
 * @y: int
 *
 * Return: x ** y
 */

int power(int x, int y)
{
	if (y == 0)
		return (1);
	return (power(x, y - 1) * x);
}

/**
 * binary_to_uint - convert binary to int
 *
 * @b: binary
 *
 * Return: int
 * or 0 if b in not a binary or null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, result = 0;

	for (i = 0; b[i]; i++)
		;
	for (j = 0; i > 0; i--, j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		result += (b[j] - '0') * power(2, i - 1);
	}

	return (result);
}
