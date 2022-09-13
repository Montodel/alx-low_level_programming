#include "main.h"

/**
* print_alphabet_x10 - print lowercase a to z 10 times
* main - task 2
* Return: void function returns nothing, 0
*/

void print_alphabet_x10(void)
{
char c;
int i=0;
for (i = 0; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
_putchar ('\n');
}
}
