#include "main.h"

/**
* reverse_array - asdf
* @a: alsdkf
* @n: alsd
*
* Return: void (always)
*/
void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;

	while (l < r)
	{
		int temp = a[l];

		a[l] = a[r];
		a[r] = temp;
	}
}
