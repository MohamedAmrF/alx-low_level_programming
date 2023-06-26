#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
* main - main function
* Return: 0 (Success)
*/
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = n % 10;
	printf("The last digit of %d is %d ", n, d);
	if (d > 5)
		printf("and is greater than 5");
	else if (d == 0)
		printf("and is zero");
	else
		printf("and is less than 6 and not 0");

	return (0);
}
