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
int number;

for (number = 0; number < 10; number++)
{
putchar('0' + number);
}

for (number = 0; number < 6; number++)
{
putchar('a' + number);
}

putchar('\n');

return (0);
}

