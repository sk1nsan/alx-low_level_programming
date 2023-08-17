#include <stdio.h>

int main(void)
{
	unsigned int i = 2;
	unsigned long n = 612852475143;

	while (n != i)
	{
		if (n % i == 0)
		{
			n = n / i;
		} else
		{
			i++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
