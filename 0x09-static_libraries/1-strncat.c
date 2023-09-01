/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of char to be concat
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0; i < n ; i++)
	{
		if (src[i] == '\0')
			break;
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
