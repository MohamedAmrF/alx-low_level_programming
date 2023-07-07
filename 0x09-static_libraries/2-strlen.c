#include "main.h"
/**
* _strlen - lenght of string
* @s: pointer to first element of string
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int ret = 0;

	while (*s != '\0')
	{
		ret++;
		s++;
	}
	return (ret);
}
