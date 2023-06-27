#include "main.h"

/**
* _isalpha - check if alphanumeric
* @c: character to be checked
*
* Return: 1 (alphanumeic) or 0 (otherwise)
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
