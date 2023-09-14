#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings separated by string
 *
 * @n: number of args
 * @separator: string
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *x;

	if (n == 0)
	{
		printf("\n");
		return;
	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(ap, char *);
		if (x)
			printf("%s%s", x, separator);
		else
			printf("(nil)%s", separator);

	}
	x = va_arg(ap, char *);
	if (x)
		printf("%s\n", x);
	else
		printf("(nil)\n");
	va_end(ap);

}
