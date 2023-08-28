#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *str, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(str + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (str + i);
		}
	}
	return (0);
}
