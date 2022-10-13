#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Return: int number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* cmp is a function that compares bit by bit */
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) && i < size)
		{
			return (i);
		}
	}
	return (-1);
	/* if you really do not meet the conditions */
}
