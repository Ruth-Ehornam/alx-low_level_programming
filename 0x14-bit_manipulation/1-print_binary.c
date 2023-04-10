#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int first = 0;

	for (i = 63; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			first = 1;
		}
		else if (first)
		{
			_putchar('0');
		}
	}
	if (!first)
	{
		_putchar('0');
	}
}
