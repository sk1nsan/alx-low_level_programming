#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers separated by string
 *
 * @n: number of args
 * @separator: string
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
