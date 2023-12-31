/**
 * _strncpy - copy at most n chars from src to dest
 *
 * @dest: destination of copy
 * @src: source array to copy
 * @n: number of chars to copy
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n  && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
