#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: the pointer to s
 *
 * Return: void (always)
 */
void print_rev(char *s)
{
	char arr[100];
	int i = 0;

	while (*s != '\0')
	{
		arr[i++] = *s++; 
	}
	while (i >= 0)
	{
		_putchar(arr[i--]);
	}
	_putchar('\n');
}
