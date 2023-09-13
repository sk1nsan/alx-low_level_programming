#include <stdlib.h>
/**
 * print_name - print name
 *
 * @name: name
 * @f: function poibter
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
