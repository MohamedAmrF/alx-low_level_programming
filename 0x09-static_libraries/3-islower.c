#include "main.h"
/**
* _islower - checks if the letter is a lowercase or not
* @c: the character to be checked
*
* Return: 1 (lowercase) or 0 (otherwise)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
