#include "main.h"

/**
* _strcpy - copy src to dest
* @dest: destination
* @src: source
*
* Return: returns pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	char *temp_dest = dest;

	while (*src != '\0')
	{
		*temp_dest = *src;
		temp_dest++;
		src++;
	}
	*temp_dest = *src;
	return (dest);
}
