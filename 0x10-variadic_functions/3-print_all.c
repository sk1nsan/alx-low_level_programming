#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all types
 *
 * @format: format of the print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *x;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i++])
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
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(ap);

}
