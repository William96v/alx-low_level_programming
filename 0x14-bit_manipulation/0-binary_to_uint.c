#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 * - There is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1; /* Left shift by 1 (equivalent to multiplying by 2) */
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1; /* Left shift by 1 and set the rightmost bit to 1 */
		}
		else
		{
			return (0); /* Invalid character, return 0 */
		}
	}

	return (result);
}

int main(void)
{
	const char *binary_str = "1101";
	unsigned int result = binary_to_uint(binary_str);
	printf("Binary: %s, Decimal: %u\n", binary_str, result);

	return (0);
}

