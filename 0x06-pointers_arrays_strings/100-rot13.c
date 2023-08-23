/**
 * rot13 - rotates string by 13 places
 *
 * @a: string to be altered
 *
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == s[j])
			{
				a[i] = m[j];
				break;
			}
		}
	}
	return (a);
}
