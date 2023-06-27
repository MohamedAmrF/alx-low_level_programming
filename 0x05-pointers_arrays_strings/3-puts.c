#include "main.h"

/**
* _puts - puts
* @str: input
*
* Return: void (always)
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
