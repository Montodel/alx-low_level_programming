#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */

int main(void)
{
	unsigned long int ab1 = 0, xy1 = 1, ab2 = 0, xy2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", xy1, xy2);
	for (count = 2; count < 98; count++)
	{
		if (xy1 + xy2 > LARGEST || ab2 > 0 || ab1 > 0)
		{
			hold1 = (xy1 + xy2) / LARGEST;
			hold2 = (xy1 + xy2) % LARGEST;
			hold3 = ab1 + ab2 + hold1;
			ab1 = ab2, ab2 = hold3;
			xy1 = xy2, xy2 = hold2;
			printf("%lu%010lu", ab2, xy2);
		}
		else
		{
			hold2 = xy1 + xy2;
			xy1 = xy2, xy2 = hold2;
			printf("%lu", xy2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
