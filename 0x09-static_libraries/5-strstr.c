#include "main.h"

/**
* *_strstr - locates a substring
*@haystack: string to be scanned
*@needle: string to be searced
*Return: pointer of the first occurrence
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, b;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		b = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0'
			&& needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + b);
		i = b + 1;
	}
	return ('\0');
}
