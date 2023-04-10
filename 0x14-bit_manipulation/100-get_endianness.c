#include "main.h"

/*
 * get_endianness - checks if machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c == 1);

}
/**
 * get_endianness - checks if machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int main(void)
{
	if (get_endianness() == 0)
	{
		printf("This machine is big endian\n");
	}
	else
	{
		printf("This machine is little endian\n");
	}
	return (0);
}
