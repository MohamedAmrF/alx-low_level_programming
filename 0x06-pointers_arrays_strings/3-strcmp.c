#include "main.h"

/**
* _strcmp - asdlf
* @s1: asldkf
* @s2: sldkf
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int ret = 0;
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	return (ret);
}
