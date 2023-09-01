/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 *
 * @s: the string which we locate the first occurrence of accept
 * @accept: the string which we search in
 *
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);

		}
	}

	return (0);

}
