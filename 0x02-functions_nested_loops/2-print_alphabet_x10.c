#include "main.h"

/**
* print_alphabet_x10 - print alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c = 'a';

		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
