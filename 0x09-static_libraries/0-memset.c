/**
 * _memset -fills the first n bytes of the area pointed to by s with the b
 *
 * @n: number of bytes
 * @s: starting location
 * @b: byte to replace with it
 *
 * Return: s starting location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
