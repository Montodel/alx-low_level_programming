#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase, using _putchar- task 1
* Return: 0, void returns nothing.
*/

void print_alphabet(void)
{
char c;
for ( c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
