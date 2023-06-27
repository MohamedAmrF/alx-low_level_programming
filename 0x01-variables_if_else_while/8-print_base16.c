#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c++);
	}
	c = 'a';
	while (c <= 'f')
		putchar(c++);

	putchar('\n');

	return (0);
}
