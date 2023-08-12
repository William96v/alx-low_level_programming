#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: print alphabets
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar('0' + num);

if (num != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}

