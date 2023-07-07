#include "main.h"

/**
* _strncpy - copy
* @dest: dest
* @src: source
* @n: number of chars
*
* Return: char pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ret = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	dest[i] = '\0';
	return (ret);
}
