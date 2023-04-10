#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int binary_int = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	binary_int = binary_int * 2 + (b[i] - '0');
	}

	return (binary_int);
}
