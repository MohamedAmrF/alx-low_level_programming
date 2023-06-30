#include "main.h"

/**
*
*
*
*/
int _strcmp(char *s1, char *s2)
{
	int ret = 0;
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s2[i] < s1[i])
			return (-1);
		else if (s2[i] >= s1[i])
			return (1);
	}
	return (ret);
}
