#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - convert a binary string to a number
* @b: string to be converted.
*
* Return: unsigned int equivalent to string b, 0 if failed.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, i = 0;

	if (*b == '\0')
		return (0);

	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		ans <<= 1;
		ans += b[i] - '0';
		i++;
	}
	return (ans);
}
