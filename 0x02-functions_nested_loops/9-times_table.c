#include "main.h"

/**
 * times_table - Entry
 * Return: nothing
 * Description: printing the times table of 9
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for  (j = 0; j <= 9; j++)
		{
			n = i * j;
			if ((n / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');

				else if  (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}