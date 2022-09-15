#include <stdio.h>

/**
 *main - largest prime facter of 612852475143.
 *Return: 0
 */

int main(void)
{
	long int a, i, b;

	b = -1;
	a = 612852475143;

	while (a % 2 == 0)
	{
		b = 2;
		a = a / 2;
	}
	for (i = 3; i <= a / 2; i = i + 2)
	{
		while (a % i == 0)
		{
			b = i;
			a = a / i;
		}
	}
	if (a > 2)
		b = a;

	printf("%ld\n", b);
	return (0);
}
