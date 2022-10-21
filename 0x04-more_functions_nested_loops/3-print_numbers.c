#include "main.h"

/**
 * print_numbers - printing numbers
 * Description: print numbers from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
