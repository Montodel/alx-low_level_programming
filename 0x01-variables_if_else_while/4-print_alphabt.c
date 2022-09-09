#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - task 4
 *Return: 0 on success
*/

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar (alphabet);
}
putchar ('\n');
return (0);
}
