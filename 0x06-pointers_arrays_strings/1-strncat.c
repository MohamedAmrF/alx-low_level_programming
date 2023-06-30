#include "main.h"

/**
* _strncat - concat
* @dest: destination string
* @src: source string
*
* Return: char pointer to new string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && i++ < n)
	{
		*temp++ = *src++;
	}
	*temp = *src;
	return (dest);
}