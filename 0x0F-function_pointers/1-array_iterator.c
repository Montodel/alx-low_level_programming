#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - array iterator
 * @array: array
 * @size: size_t
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* diferente de 0 */
	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
