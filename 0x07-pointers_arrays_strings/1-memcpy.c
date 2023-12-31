/**
 * _memcpy - copies n bytes src to dest
 *
 * @n: number of bytes
 * @src: place to be copied to
 * @dest: place to be copied from
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
