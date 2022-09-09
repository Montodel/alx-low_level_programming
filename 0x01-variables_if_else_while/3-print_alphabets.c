#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *
 *  *main - task 3
 *
 *   *Return: 0 on success
 *
 *   */

int main(void)
{
	char lower_case;
	char upper_case;
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar (upper_case);
	}
	putchar ('\n');
	return (0);
}
