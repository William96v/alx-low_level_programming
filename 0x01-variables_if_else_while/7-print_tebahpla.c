#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: print reverse alphabets
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'z';

while (lowercase >= 'a')
{
putchar(lowercase);
lowercase--;
}

putchar('\n');

return (0);
}

