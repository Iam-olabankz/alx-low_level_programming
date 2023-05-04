#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int i, length = 0;

	if (b == NULL)
		return (0);

	/* Determine length of the string */
	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	/* Iterate through string in reverse order and convert binary to decimal */
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += bit_value;
		bit_value *= 2;
	}

	return (result);
}

