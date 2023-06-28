#include "main.h"

/**
* print_times_table - prints timetable
* @n: print till times table n
*
* Returns: void
*/
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int answer = i * j;

			if (answer >= 10)
				_putchar('0' + (answer / 10) % 10);
			else if (j > 0)
				_putchar(' ');

			_putchar('0' + answer % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
