/**
 * _strcmp - compare 2 strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 15 if s1 > s2
 *	-15 if s1 < s2
 *	0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		if (s1[i] > s2[i])
			return (15);
		return (-15);
	}

	return (0);
}
