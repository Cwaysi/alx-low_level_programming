#include "main.h"

/**
 * print_line - main function
 * @n: an input
 * Return: alway 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
