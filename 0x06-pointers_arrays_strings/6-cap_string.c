/**
 * cap_string - capitalizes all words of a string
 *
 * @a: string to be altered
 *
 * Return: a
 */
char *cap_string(char *a)
{
	int i, j;
	char s[] = " ,;.!?\"\t\n(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] < 123 && a[i] > 96)
		{
			for (j = 0; j < 13; j++)
			{
				if (a[i - 1] == s[j] || i == 0)
				{
					a[i] -= 32;
					break;
				}
			}
		}
	}
	return (a);
}
