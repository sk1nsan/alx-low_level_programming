/**
 * _strstr- finds the first occurrence of the needle in the haystack.
 *
 * @haystack: the string which we locate the first occurrence of needle
 * @needle: the string which we search for
 *
 * Return: Returns a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		flag = 1;
		k = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] != needle[j])
			{
				flag = 0;
				break;
			}
			k++;
		}
		if (flag)
			return (&haystack[i]);
	}

	return (0);

}
