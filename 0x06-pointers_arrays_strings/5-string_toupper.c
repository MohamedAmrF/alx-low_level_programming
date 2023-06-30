#include "main.h"

/**
* string_toupper - asdjlfas
* @ss: alsdf
*
* Return: char pointer
*/
char *string_toupper(char *ss)
{
	char *s = ss;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 'a' + 'A';
	}
	return (ss);
}
