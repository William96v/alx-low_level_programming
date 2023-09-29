#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 * @str: string
 * @av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k = 0;
char *result;
if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
total_length++;
}
total_length++;
}
result = malloc(total_length + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
result[k++] = av[i][j];
}
result[k++] = '\n';
}

result[k] = '\0';

return (result);
}

