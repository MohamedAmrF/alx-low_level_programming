#include "main.h"

/**
* _strcat - concat
* @dest: destination string
* @src: source string
*
* Return: char pointer to new string
*/
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp++ = *src++;
	}
	*temp = *src;
	return (dest);
}
