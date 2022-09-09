#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - task 8
 *Return: 0 on success
*/

int main(void)
{
	char base_16;
	for (base_16 = 48; base_16 <= 57; base_16++)
	{
		putchar (base_16);
	}
	for (base_16 = 97; base_16 <= 102; base_16++)
	{
		putchar (base_16);
	}
	putchar ('\n');
	return (0);
}
