#include "main.h"

/**
* get_endianness - get endianness.
*
* Return: 1 if big endian, 0 if little endian.
*/
int get_endianness(void)
{
	int x = 0x76543210;
	char *c = (char *) &x;

	return (*c != 0x76);
}
