#include <stdio.h>

/**
 * _isdigit - check if the character is a digit (0-9)
 *
 *@c: the int to be checked
 *
 * Return: 1 if it is a digit
 *	0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}




/**
 * _atoi - convert string to int
 *
 *@s: string to be converted
 *
 * Return: void
 */

int _atoi(char *s)
{
	int result = 0, sign = 0, i = 0;

	while (s[i] != '\0')
	{
		if (_isdigit(s[i]))
		{
			result *= 10;
			result += s[i] - '0';
			i++;
			continue;
		}
		if (result != 0)
			break;

		if (s[i] == '-')
		{
			sign++;
			i++;
			continue;
		}
		i++;
	}
	if (sign % 2 != 0)
		result = -result;

	return (result);

}
