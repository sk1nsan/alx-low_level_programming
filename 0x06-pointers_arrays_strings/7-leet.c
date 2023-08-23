/**
 * leet - encodes string into 1337
 *
 * @a: string to be altered
 *
 * Return: a
 */
char *leet(char *a)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char m[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s[j])
				a[i] = m[j];
		}
	}
	return (a);
}
