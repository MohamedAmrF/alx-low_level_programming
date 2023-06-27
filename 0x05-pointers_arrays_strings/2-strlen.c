#include "main.h"
/**
*
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
