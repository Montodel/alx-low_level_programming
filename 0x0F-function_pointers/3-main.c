#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - calculator
 * @argc: num args
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	int _exit;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	/*make a police for pointer*/
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	_exit = f(a, b);
	printf("%d\n", _exit);
	return (0);
}
