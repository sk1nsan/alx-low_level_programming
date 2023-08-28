/**
 * _strspn- Returns the number of bytes in s which of bytes from accept
 *
 * @s: the string which how many bytes from accept there is
 * @accept: the bytes which we will check for
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, result = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				result++;
			}

		}
		if (!flag)
			return (result);
	}

	return (result);

}
