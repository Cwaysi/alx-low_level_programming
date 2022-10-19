#include "main.h"

/**
 * print_sign - this is the function
 * @c: this is the parameter
 * Description: return 1 0 -1 when greater
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

