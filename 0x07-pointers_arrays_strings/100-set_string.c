/**
 * _memcpy - copies n bytes src to dest
 *
 * @n: number of bytes
 * @src: place to be copied to
 * @dest: place to be copied from
 *
 * Return: dest
 */

void set_string(char **s, char *to)
{
	unsigned int i;

	for (i = 0; *s[i] != '\0'; i++)
		*s[i] = to[i];


}
