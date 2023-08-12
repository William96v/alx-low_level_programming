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
int number = 0;

while (number <= 9)
{
putchar(number + '0');  /* Convert number to character */
number++;
}

putchar('\n');

return (0);
}

