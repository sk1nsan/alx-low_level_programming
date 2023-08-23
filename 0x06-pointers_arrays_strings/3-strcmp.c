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
	int j;

	for (i = 0;  s1[i] != '\0'; i++)
		;
	for (j = 0;  s2[j] != '\0'; j++)
		;
	if (i > j)
		return (15);
	if (j > i)
		return (-15);
	return (0);
}
