/**
 * infinite_add - adds 2 numbers in string n1 and n2 in r
 *
 * @n1: first number
 * @n2: second number
 * @r: n1+n2
 * @size_r: length of r
 *
 * Return: result of addition 
 * or 0 if length of r not enough for the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k = 1, carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	while (i - 1 != -1 && j - 1 != -1)
	{
		if (k > size_r)
			return (0);
		r[size_r - k] = '0' + (n1[i] + n2[j] + carry) % 10;
		carry = (n1[i] + n2[j] + carry) / 10;
		i--;
		j--;
		k++;
	}

	while (j - 1 != -1)
	{
		if (k > size_r)
			return (0);
		r[size_r - k] = '0' + (n2[j] + carry) % 10;
		carry = (n2[j] + carry) / 10;
		j--;
		k++;
	}

	while (i - 1 != -1)
		{
			if (k > size_r)
				return (0);
			r[size_r - k] = '0' + (n1[i] + carry) % 10;
			carry = (n1[i] + carry) / 10;
			i--;
			k++;
		}

	return (r);
}
