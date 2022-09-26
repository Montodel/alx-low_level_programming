#include "main.h"
#include <stdio.h>

/**
* print_diagsums - the sum of two diagonals of a square matrix
*@a: array
*@size: size of array
*Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i, max, sum, sum1;

	i = 0;
	sum = 0;
	sum1 = 0;
	max = size * size;
	while (i < max)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < (max - 1))
	{
		sum1 = sum1 + a[i];
		i = i + size - 1;
	}
	printf("%d, %d", sum, sum1);
	printf("\n");
}
