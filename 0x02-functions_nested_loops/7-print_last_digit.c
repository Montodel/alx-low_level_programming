#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int xy;

	if (n < 0)
	{
		xy = -1 * (n % 10);
		_putchar(xy + '0');
		return (xy);
	}
	else
	{
		xy = n % 10;
		_putchar(xy + '0');
		return (xy);
	}
}
