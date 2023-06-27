#include "main.h"
#include <string.h>

/**
* puts_half - prints second half
* @str: input string
*
* Return: void (always)
*/
void puts_half(char *str)
{
	int n = strlen(str);

	int dist = n / 2;
	int i = 0;

	while (i < dist)
	{
		str++;
		i++;
	}
	while (*str != '\0')
		_putchar(*str++);
}
