#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - print all types
 *
 * @format: format of the print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, n;
	va_list ap;
	char *x;

	n = strlen(format);
	va_start(ap, format);
	i = -1;
	while (i < n - 1)
	{
		i++;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				x = va_arg(ap, char *);
				if (x)
				{
					printf("%s", x);
					break;
				}
				printf("(nil)");
				break;
			default:
				continue;
		}
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
	va_end(ap);

}
