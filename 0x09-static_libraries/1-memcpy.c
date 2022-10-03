#include "main.h"

/**
*_memcpy - copies memory area
*@dest: destination to copy
*@src: source pointer
*@n: number of bytes to coppy
*Return: dest (destination)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
