#include "main.h"

/**
 * void print_alphabet_x1 - Entry to print 
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char alp;

	for (i = 0; i <= 9; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp ++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
