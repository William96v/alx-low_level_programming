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
char lowercase = 'a';

while (lowercase <= 'z')
{
if (lowercase == 'q' || lowercase == 'e')
{
lowercase++;
}
else
{
putchar(lowercase);
lowercase++;
}
}
putchar('\n');

return (0);
}

