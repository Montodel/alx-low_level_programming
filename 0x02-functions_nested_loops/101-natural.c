#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

 int main(void)
{
	int n = 0;
	int i;

	for (i=0; i < 1024; i++)
	{
		if (i % 3 == 0)
		n += i;

		if (i % 5 == 0)
		n += i;
	}
	printf("%i\n", n);
	return 0;
}
