#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int output = 0;

	while (n || m)
	{
	if ((n & 1) != (m & 1))
		count++;
		n >>= 1;
		m >>= 1;
	}
	return (output);
}
