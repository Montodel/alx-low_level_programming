#include "main.h"

/**
* *_strpbrk - searches a string for any of a set of bytes
*@s: pointer receieved
*@accept: pointer to compare
*Return: pointer that marches one of the characters
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		h = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				h = 1;
			}
		}
		if (h == 1)
		{
			return (s + i);
		}
	}
	return ('\0');
}
