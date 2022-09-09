#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - task 9
 *Return: 0 on success
*/

int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar (num);
if (num == 57)
{
break;
}
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
