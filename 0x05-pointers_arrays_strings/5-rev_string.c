#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  * Return: void
  */

void rev_string(char *s)
{
	int i, x, y;
	char *a, b;

	a = s;

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = 1; y < x; y++)
	{
		a++;
	}

	for (i = 0; i < (x / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
