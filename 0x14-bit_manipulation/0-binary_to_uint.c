#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @bin_str: string containing the binary number
 *
 * Return: the converted number, or 0 if there is an invalid character
 */
unsigned int binary_to_uint(const char *bin_str)
{
int idx;
unsigned int res = 0;

if (!bin_str)
return (0);

for (idx = 0; bin_str[idx]; idx++)
{
if (bin_str[idx] < '0' || bin_str[idx] > '1')
return (0);
res = 2 * res + (bin_str[idx] - '0');
}

return (res);
}
