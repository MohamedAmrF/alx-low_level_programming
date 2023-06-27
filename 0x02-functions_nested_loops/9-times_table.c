#include "main.h"

/**
* times_table - prints timetable
* Returns: void
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int answer = i * j;

			_putchar('0' + (answer / 10) % 10);
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
